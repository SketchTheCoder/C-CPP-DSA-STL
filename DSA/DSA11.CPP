//Implementation of Queue using link list....
#include<iostream>
using namespace std;
#define  EMPTY_QUEUE 1
struct node{
int item;
 node *next;
};
class Queue{
private:
node *front,*rear;
int size;
public:
Queue();
void insert(int);
bool isempty();
int viewrear();
int viewfront();
void dltfront();
~Queue();
int noOfelements();
};
Queue::Queue()
{
  front=rear=nullptr;  
  size=0;
}
void Queue::insert(int data)
{
   node *n=new node;
    n->item=data;
    n->next=nullptr;
    if(isempty())
    {
    rear=n;
    front=n;
    }
    else
    {
      rear->next=n;
      rear=n;
    }
    size++;
}
bool Queue::isempty()
{
    return front==nullptr||rear==nullptr;   
}
int Queue::viewrear()
{
    if(isempty())
       throw  EMPTY_QUEUE ;
    return rear->item;   
}
int Queue::viewfront()
{
 if(isempty())
      throw EMPTY_QUEUE;
   return front->item;
}
void Queue::dltfront()
{
if(isempty())
   throw EMPTY_QUEUE;
   if(rear==front)
   {
      delete front;
      rear=front=nullptr;
   }
   else{
      node* temp;
      temp=front;
      front=front->next;
      delete temp;
   }
   size--;
}
Queue::~Queue()
{
if(isempty())
   throw EMPTY_QUEUE;
 while(front!=nullptr)
     dltfront();
}
int Queue::noOfelements()
{
    return size;
}
