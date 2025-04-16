#include<iostream>
using namespace std;
struct node{
    int item;
    node *next;
    node *prev;
};
class CDLL
{
private:
node* start;
public:
CDLL();
void insertstart(int);
void insertend(int);
node* search(int);
void insert(node*,int);
void dltstrt();
void dltlast();
void dltspcific(int);
~CDLL();
};
CDLL::CDLL()
{
    start=nullptr;
}
void CDLL::insertstart(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        n->prev=n;
        n->next=n;
        start=n;
    }
    else{
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
        start=n;
    }
}
void CDLL::insertend(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
n->prev=n;
n->next=n;
start=n;
    }
    else
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
    }
}
node* CDLL::search(int data)
{
  
if(start==nullptr)
 return nullptr;
 node *temp=start;
   do{
    if(temp->item==data)
      return temp;
      temp=temp->next;
   }
   while(temp!=start);
 return nullptr;
}
void CDLL::insert(node* t,int data)
{
    if(t!=nullptr)
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        n->prev=t;
        t->next->prev=n;
        t->next=n;
    }
}
void CDLL::dltstrt()
{
    if(start!=nullptr)
    {
        if(start->next=start)//means one node
           {
            delete start;
            start=nullptr;
           }
           else{
            start->next->prev=start->prev;
            start->prev->next=start->next;
            node* temp=start;
            start=start->next;
            delete temp;
           }
    }
}
void CDLL::dltlast()
{
    if(start!=nullptr)
    {
        if(start->next=start)//means one node
        {
         delete start;
         start=nullptr;
        }
        else{
        node* temp=start->prev;
          temp->prev->next=start;
          start->prev=temp->prev;
          delete temp;
    }
}
}
void CDLL::dltspcific(int data)
{
node *t=search(data);
if(t!=nullptr)
{
    if(t==start)
    dltstrt();
    else{
        t->prev->next=t->next;
        t->next->prev=t->prev;
        delete t;
    }  
}
}
CDLL::~CDLL()
{
    while(start!=nullptr)
      dltstrt();
}
