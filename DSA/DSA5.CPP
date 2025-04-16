#include<iostream>
using namespace std;
struct node{
node *prev;    
int item;
node *next;
};
class DLL{
private:
node *start;
public:
DLL();
void insertstart(int);
void insertlast(int);
void specificinsert(node*,int);
node* search(int);
void dletefirst();
void deletlast();
void deletenode(int data);
~DLL();
};
DLL::DLL()
{
    start=nullptr;
}
void DLL::insertstart(int data)
{
  node *n=new node;
  n->prev=nullptr;
  n->item=data;
  n->next=start;
  if(start!=nullptr)
        start->prev=n;
  start=n;
}
void DLL::insertlast(int data)
{
  node *n=new node;
  n->item=data;
  n->next=nullptr;
  if(start==nullptr)
   {
    start=n;
    n->prev=nullptr;
   }
   else{
    node *temp=start;
    while(temp->next!=nullptr)//traverse until it raches to the last node....
        temp=temp->next;
    n->prev=temp;
    temp->next=n;
   }
}
void DLL::specificinsert(node* t,int data)
{
  if(t!=nullptr)
  {
    node *n=new node;
    n->item=data;
    n->next=t->next;
    n->prev=t;
     if(t->next!=nullptr)
        t->next->prev=n;
     t->next=n;   

  }
}
node* DLL::search(int data)
{
  if(start==nullptr)
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
void DLL::dletefirst()
{
  if(start!=nullptr)
  {
    if(start->next==nullptr)
    {
     delete start;
     start=nullptr;
    }
    else
    {
      start=start->next;
      delete start->prev;
      start->prev=nullptr;
    }
}
}
DLL::~DLL()
{
while(start!=nullptr)
      dletefirst();
}
void DLL::deletlast()
{
  if(start!=nullptr)
  {
    if(start->next==nullptr)
    {
     delete start;
     start=nullptr;
    }
    else
    {
      node *temp=start;
      while(temp->next!=nullptr)
         temp=temp->next;
        temp->prev->next=nullptr;
       delete temp;  
    }
}
}
void DLL::deletenode(int data)
{
 node* temp=search(data);
 if(temp!=nullptr)
 {
  if(start==temp)
     dletefirst();
  else if(temp->next==nullptr)   
       deletlast();
  else
  {
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
  }
 }
}
