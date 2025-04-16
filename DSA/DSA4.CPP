#include<iostream>
using namespace std;
#define LINK_LIST_UNDERFLOW 1
struct node
{
    int item;
    node *next;
};
class SLL
{
    private:
    node *start;
    public:
    SLL();
    void insertatBegining(int);
    void insertatLast(int);
    node* search(int);//return type is node address
    void insertatspecified(node*,int);
    void deletefirstnode();
    void deletelastnode();
    void deletespicific(int);
    ~SLL();
}; 
SLL::SLL()
{
    start==nullptr;
}
void SLL::insertatBegining(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
void SLL::insertatLast(int data)
{
    node *n=new node;
   n->item=data;
   n->next=nullptr;
   if(start==nullptr)//there is no list thus first element will be the last..
      start=n;
   else
   {
   node *temp=start;//we created a temparoray pointer for traversing..
   while(temp->next!=nullptr)
       temp=temp->next;//it will traverse until it reaches the last node and temp will have last node adress
    temp->next=n;
   }
}
node* SLL::search(int data)
{
  if(start ==nullptr)
      return nullptr;
   node *temp=start;
   while(temp!=nullptr)   
   {
    if(temp->item==data)
       return temp;
  temp=temp->next;
   }
   return nullptr;
}
void SLL::insertatspecified(node *t,int data)//t is the pointer of that node after which we need to insert t hold addres of next node
{
    if(t!=nullptr)
       {
        node *n=new node;
        n->item=data;
        n->next=t->next; 
        t->next=n;
       }
}
void SLL::deletefirstnode()
{
    if(start==nullptr)
      throw LINK_LIST_UNDERFLOW;
    node *temp=start;
    start=start->next;
    delete temp;
}
void SLL::deletelastnode()
{
    if(start==nullptr)
          throw LINK_LIST_UNDERFLOW;
    if(start->next==nullptr)  
        {
            delete start;
            start=nullptr;
        }
        else
        {
       node *temp=start;
           while(temp->next->next!=nullptr)
                { 
                    temp=temp->next;        
        }
        delete temp->next;
        temp->next=nullptr;
}
}
void SLL::deletespicific(int data)
{
    if(start==nullptr)
       throw LINK_LIST_UNDERFLOW;
node *t1,*t2;
t1=start;
t2=nullptr;
while(t1!=nullptr)
{
    if(t1->item==data)
       break;
       t2=t1;
    t1=t1->next;
}
if(t2==nullptr)
    deletefirstnode();
if(t1!=nullptr)
     {
        t2->next=t1->next;
        delete t1;
     }
}
SLL::~SLL()
{
    while(start!=nullptr)
       deletefirstnode();
    
}




