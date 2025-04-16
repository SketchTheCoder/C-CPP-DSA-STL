#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class CLL
{
private:
node *last;
public:
CLL();
void insertatbegining(int);  
void insertatlast(int);
void insertspec(node*,int);
node * search(int);
void dltstart();
void dltlast();
void dltspecific(int data);
~CLL();
};
CLL::CLL()
{
    last=nullptr;
}
void CLL::insertatbegining(int data)
{
    node *n= new node;
    n->item=data;
  if(last==nullptr)
  {
   n->next=n;
   last=n;
}
else{
    n->next=last->next;
    last->next=n;
}
}
void CLL::insertatlast(int data)
{
    node *n=new node;
    n->item=data;
    if(last==nullptr)
    {
        n->next=n;
        last->next=n;
        last=n;

    }
        else{
            n->next=last->next;
            last=n;
        }   
}
void CLL::insertspec(node* temp,int data)
{    
if(temp!=nullptr)
{
node *n=new node;
n->item=data;
n->next=temp->next;
temp->next=n;
if(temp==last)
    last==n;
}
}
node * CLL::search(int data)
{
    if(last==nullptr)
        return nullptr;
node *temp;
temp=last->next;
do
{
    if(temp->item==data)
         return temp;
      temp=temp->next;       
}
while(temp!=last->next);
return nullptr;
}
void CLL::dltstart()
{
    if(last!=nullptr)
    {
        if(last->next==last)//means have one node...
          {
            delete last;
            last=nullptr;
          }
          else{
          node *temp=last->next;
          last->next=temp->next;
          delete temp;
           }
    }
}
void CLL::dltlast()
{
    if(last!=nullptr)
    {
        if(last->next==last)//means have one node...
          {
            delete last;
            last=nullptr;
          }
          else{
          node *temp;
          temp=last->next;
          while(temp->next!=last)
            temp=temp->next;

          temp->next=last->next;
          delete last;
          last=temp;  
           }
    }
}
void CLL::dltspecific(int data)
{
node *t=search(data);
if(t!=nullptr)
{
    if(t==last->next)
       dltstart();
    else if(t==last)
      dltlast();
    else {
        node *temp;
        temp=last->next;
        while(temp->next!=t)
           temp=temp->next;
        temp->next=t->next;
        delete t;   
    }     
}
}
CLL::~CLL()
{
    while(last!=nullptr)
    dltstart();
}



