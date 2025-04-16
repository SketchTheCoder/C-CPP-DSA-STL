#include<iostream>
using namespace std;
#define INVALID_CAPACITY 0
#define EMPTY_HEAP 1
#define INVALID_INDEX 3
class Heap
{
int capacity;
int lastIndex;
int *ptr;
public:
Heap(int);
void insert(int);
bool IsEmpty();
Heap(Heap &);
int del();
bool IsFull();
int get(int);
int count();
void doublearray();
void halfarray();
int size();
int max();
~Heap();
Heap& operator=(Heap &);
};
Heap& Heap::operator=(Heap &h)
{
capacity=h.lastIndex;
lastIndex=h.lastIndex;
if(ptr!=nullptr)
    delete[]ptr;
 ptr=new int[capacity];
 for(int i=0;i<lastIndex;i++)
      ptr[i]=h.ptr[i];
   return *this;      
}
Heap::Heap(Heap &h)
{
   capacity=h.lastIndex;
   lastIndex=h.lastIndex;
   ptr=new int[capacity];
 for(int i=0;i<lastIndex;i++)
      ptr[i]=h.ptr[i];
}
int Heap::max()
{
   if(!IsEmpty())
         return ptr[0];//Maxium value is at parent node...
   else
   throw EMPTY_HEAP;       
}
int Heap::del()//Top element gets deleted and lower index element get to the top but should arrange after changing is its small than left and right child...
{
   int i,item,temp,index,leftindex,rightindex;
   if(IsEmpty())
       throw EMPTY_HEAP;
   else
   {
      item=ptr[0];
      temp=ptr[lastIndex];
      lastIndex--;
      index=0;
      leftindex=1;
      rightindex=2;
      while(leftindex<lastIndex)
      {
         if(ptr[leftindex]>ptr[rightindex])
         {
            if(temp<ptr[leftindex])
               {
                  ptr[index]=ptr[leftindex];
               }
               else
               break;
         }
         else
         {
            if(ptr[leftindex]<ptr[rightindex])
            {
               if(temp<ptr[rightindex])
                  {
                     ptr[index]=ptr[rightindex];
                  }
                  else
                  break;
         }
      }
      leftindex=2*index+1;//Formula for left index child..
      rightindex=2*index+2;//formula for right index child...
   }
   if(leftindex==lastIndex && temp<ptr[leftindex])
   {
      ptr[index]=ptr[leftindex];
      index=leftindex;
   }
   ptr[index]=temp;
   if(capacity/2>=lastIndex+1 && capacity>1)
           halfarray();
      return item;     
   }
}
void Heap::insert(int data )
{
    int i,index,parindex;
    if(IsFull())
       doublearray();
    for(index=lastIndex+1;index>0;index=parindex)   
    {
      parindex=(index-1)/2;//to find parent index 
      if(ptr[parindex]<data)
           ptr[index]=ptr[parindex];
       else 
       break;    
    }
    ptr[index]=data;
    lastIndex++;
}
int Heap::size()
{
   return capacity;
}
void Heap::halfarray()
{
int *temp=new int[capacity/2];
for(int i=0;i<=lastIndex;i++)//Copyiing data to another pointer...
     temp[i]=ptr[i];
  delete []ptr;
 ptr=temp;
 capacity/=2;   
}
void Heap::doublearray()
{
   int *temp=new int[capacity*2];
   for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
     delete []ptr;
    ptr=temp;
    capacity*=2; 
}
bool Heap::IsEmpty()
{
   return lastIndex==-1;
}
Heap::Heap(int cap)
{
   if(cap<1)
       throw INVALID_CAPACITY;
   capacity=cap;
   lastIndex=-1;
   ptr=new int[capacity];
}
bool Heap::IsFull()
{
   return lastIndex==capacity-1;
}
int Heap::get(int index)
{
if(index>=0 && index<=lastIndex)
      return ptr[index];
   else
   throw INVALID_INDEX;   
}
int Heap::count()
{
   return lastIndex+1;
}
Heap::~Heap()
{
   delete []ptr;
}
void heapSort(int A[],int size)//If we delete a heap and store it in reverse order into an array it get sorted...
{
   Heap heap(size);
   for(int i=0;i<size;i++)
     heap.insert(A[i]);
   for(int i=size-1;i>=0;i--)
       A[i]=heap.del();      
}