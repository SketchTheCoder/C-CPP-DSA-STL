//Implementation of Queue using Array.....
#include<iostream>
using namespace std;
#define INVALID_CAPACITY 1
#define QUEUE_OVERFLOW 2
#define INVALID_QUEUE 3
#define QUEUE_UNDERFLOW 4
class Queue{
private:
int capacity;
int front,rear;
int *ptr;
public:
Queue(int);
void insert(int);
bool isfull();
bool isempty();
int viewrear();
int viewfront();
void dltfront();
~Queue();
int No_ofelements();
};
Queue::Queue(int cap)
{
ptr==nullptr;
if(cap<1)
  throw INVALID_CAPACITY;
capacity=cap;
front=rear=-1;
ptr=new int[cap]; 
}
void Queue::insert(int data)
{
if(ptr==nullptr)
    throw INVALID_QUEUE;
if(isfull())
    throw QUEUE_OVERFLOW;
if(isempty())
   {
    ++front;
    ++rear;
    ptr[rear]=data;
   }   
   else{
    if(rear==capacity-1)//rear is pointing to last but we can't increement to last and if control reaches here it means front is not 0 ...
      {
         rear=0;
         ptr[rear]=data;
      }
      else
   {
    ++rear;
    ptr[rear]=data;
   }
}
}
bool Queue::isfull()
{
    if(ptr==nullptr)
       throw INVALID_QUEUE;
    return rear+1==front || rear==capacity-1 && front==0;//if some element are deleted at front then in that rear==cap-1 would not be correct...
}//this rear+1==front means that the increment in rear leads to the front think of a circle...
bool Queue::isempty()
{
    if(ptr==nullptr)
        throw INVALID_QUEUE;
    return front==-1;//or we can say that rear ==-1;
}
int Queue::viewrear()
{
if(ptr==nullptr)
    throw INVALID_QUEUE;
if(isempty())
    throw QUEUE_UNDERFLOW;
return ptr[rear];
}
int Queue::viewfront()
{
if(ptr==nullptr)
       throw INVALID_QUEUE;
if(isempty())
    throw QUEUE_UNDERFLOW;
return ptr[front];
}
void Queue::dltfront()
{
 if(ptr==nullptr)
    throw INVALID_QUEUE;
if(isempty())
   throw QUEUE_UNDERFLOW; 
if(front==rear)//single element in a queue
    front=rear=-1;
else if(front+1==capacity)
     front=0;
 else
 front++;
}
Queue::~Queue()
{
    if(ptr!=nullptr)
        delete []ptr;
}
int Queue::No_ofelements()
{
 if(ptr==nullptr)
    throw INVALID_QUEUE;
if(isempty())
    return 0;
if(rear>=front)
{
return rear-front+1;
}    
else{
return capacity-front-rear+1;
}

}
 