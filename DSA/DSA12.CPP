#include<iostream>
using namespace std;
#define QUEUE_OVERFLOW
#define QUEUE_UNDERFLOW
struct node{
    node* prev;
    int item;
    node* next;
};
class deque
{
private:
node* front;
node* rear;
int size;
public:
deque();
bool isempty();
void insertfront(int);
void insertrear(int);
void dltfront();
void dltrear();
int getfront();
int getrear();
~deque();
int getsize();
};

deque::deque()
{
    front=rear=nullptr;
    size=0;
}
void deque::insertfront(int data)
{
node* n=new node;
n->item=data;
n->prev=nullptr;
n->next=front;
if(front!=nullptr)
   front->prev=n;
else
    rear=n;   
front=n;
size++;
}
bool deque::isempty()
{
   return front=nullptr;     
}
void deque::insertrear(int data)
{
node* n=new node;
n->item=data; 
n->next=nullptr;
n->prev=rear;   
if(isempty())
    front=n;
else
    rear->next=n;
rear=n;
size++;
}
void deque::dltfront()
{
    if(isempty())
       throw QUEUE_UNDERFLOW;
    if(front==rear)
    {
        delete front;
    front=rear=nullptr;
    }

    else
    {
        front=front->next;
        delete front->prev;
        front->prev=nullptr;
    }
    size--;
}
void deque::dltrear()
{
    if(isempty())
         throw QUEUE_UNDERFLOW;
   if(front==rear)
   {
    delete front;
front=rear=nullptr;
}
     else{
        rear=rear->prev;
        delete rear->next;
        rear->next=nullptr;
     }    
     size--;
}
int deque::getfront()
{
  if(isempty())
     throw QUEUE_UNDERFLOW;
  return front->item;
}
int deque::getrear()
{
  if(isempty())
     throw QUEUE_UNDERFLOW;
  return rear->item;
}
deque::~deque()
{
    while(front!=nullptr)
       dltfront();
}
int deque::getsize()
{
    return size;
}
