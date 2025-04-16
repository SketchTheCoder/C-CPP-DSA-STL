#include<iostream>
using namespace std;
#define DUPLICATE_VALUE
struct node{
node *left;    
int item;
node *right;
};
class BST{
private:
node *root;
protected:
void preorderrecursive(node*);
void inorderrecursive(node*);
void postorderrecursive(node*); 
node* dltnode(node*,int);
public:
BST();
bool isempty();
void insert(int);
void preorder();
void inorder();
void postorder();
void dlt(int);
node* search(int);
~BST();
};
BST::BST()
{
    root=nullptr;
}
bool BST::isempty()
{
    return root==nullptr;
}
void BST::insert(int data)
{
    node *ptr;
    node *n=new node;
    n->item=data;
    n->left=nullptr;//new element is inserted at leaf node so both the left and right pointer points to null
    n->right=nullptr;
    if(isempty())
        root=n;
    else
    {
     ptr=root;
     while(ptr->item!=data)
     {
        if(ptr->item>data)//left subtree
          {
            if(ptr->left!=nullptr)
              ptr=ptr->left;
            else
            {
            ptr->left=n; 
            break; 
          }
        }
          else//right subtree
          {
            if(ptr->right!=nullptr)
              ptr=ptr->right;
            else
            {
                ptr->right=n;
                break;
            }  
          }
     }
     if(ptr->item==data)
        delete n;
    }
}
void BST::preorder()
{
preorderrecursive(root);
}
void BST::preorderrecursive(node *ptr)
{
if(ptr!=nullptr)
{
    cout<<" "<<ptr->item;//first print the item of root then its left and right subtree...
    preorderrecursive(ptr->left);
    preorderrecursive(ptr->right);
}
}
void BST::inorder()
{
    inorderrecursive(root);
}
void BST::inorderrecursive(node *ptr)
{
    if(ptr!=nullptr)
    {
    inorderrecursive(ptr->left);
    cout<<" "<<ptr->item;
    inorderrecursive(ptr->right);
}
}
void BST::postorder()
{
    postorderrecursive(root);
}
void BST::postorderrecursive(node *ptr)
{
    if(ptr!=nullptr)
    {
        postorderrecursive(ptr->left);
        postorderrecursive(ptr->right);
        cout<<" "<<ptr->item;
    }
}
node* BST::search(int data)
{
node *ptr=root;
while(ptr!=nullptr)
{
if(ptr->item==data)
  return ptr;
if(ptr->item>data)
    ptr=ptr->left;
 else
   ptr=ptr->right;   
}
return ptr;
}
void BST::dlt(int data)
{
    root=dltnode(root,data);
}
node* BST::dltnode(node *ptr,int data)
{
  if(ptr==nullptr)
     return ptr;
  if(data<ptr->item)
       ptr->left=dltnode(ptr->left,data);
   else if(data>ptr->item)
      ptr->right=dltnode(ptr->right,data);
    else
    {
      //node found

      //no child
      if(ptr->left==nullptr && ptr->right==nullptr)
      {
        delete ptr;
        return nullptr;
      }
      //single child
      if(ptr->left==nullptr||ptr->right==nullptr)
       {
       node *child=ptr->left!=nullptr?ptr->left:ptr->right;//condtional operator
         delete ptr;
         return child;
       }
      //Two childer
      /*In case of two child dont delete node just change the node to its predeccer or with succer and as two
      value become same thus delete the predecesser*/
      node *pred,*parentpred;
      parentpred=ptr;
      pred=ptr->left;
      while(pred->right!=nullptr)
      {
        parentpred=pred;
        pred=pred->right;
      }
      ptr->item=pred->item;
      if(parentpred->right==pred)//pred is right child of parentpred
            parentpred->right=dltnode(pred,pred->item);
      else//pred is left child of parentpred
      parentpred->left=dltnode(pred,pred->item);
    }      
    return ptr;
}
BST::~BST()
{
  while(root!=nullptr)
       dlt(root->item);
}