#include<iostream>
using namespace std;
#define ILLEGAL_CAPCITY 1
#define Dynarray_NOT_CREATED 2
#define Dynarray_OVERFLOW 3
#define INVALID_INDEX 4
#define Dynarray_UNDERFLOW 5
class Dynarray
{
private:
int capacity;
int last_index;
int *ptr;
protected:
void Double_Dynarray();//these are proteted as we dont want user to call these themselves.
void Half_Dynarray();
public:
Dynarray();
Dynarray(int);

int Size();
bool Is_empty();
void append(int);
bool is_full();
void insert(int,int); 
void edit(int,int);
void delte(int);
int get(int);
int count_element();
~Dynarray();
int find(int); 
};
Dynarray::Dynarray()
{
   capacity=1;
   last_index-1;
   ptr=new int[capacity];
}
Dynarray::Dynarray(int cap)
{
    ptr=nullptr;
     if(cap<1)
         throw ILLEGAL_CAPCITY;
     capacity=cap;
     last_index=-1;
     ptr= new int[capacity];
}
void Dynarray::Double_Dynarray()
{
 /* if(ptr==nullptr)//this will never run as this function will be called by insert or append function means array is created..
     throw Dynarray_NOT_CREATED;//It will be return there so not necessary to write it
*/
int *temp=new int[capacity*2];
for(int i=0;i<=last_index;i++)
    temp[i]=ptr[i];
 delete []ptr;
 ptr=temp;  
 capacity*=2; 
}
void Dynarray::Half_Dynarray()
{
   int *temp=new int[capacity/2];
   for(int i=0;i<=last_index;i++)
       temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;  
    capacity/=2; 
}
int  Dynarray::Size()
{
if(ptr==nullptr)
     throw Dynarray_NOT_CREATED;
 return last_index+1;       
}
bool Dynarray::Is_empty()
{
    if(ptr==nullptr)
       throw Dynarray_NOT_CREATED;
     return last_index==-1; 
}
bool Dynarray::is_full()
{
    if(ptr==nullptr)
        throw Dynarray_NOT_CREATED;
    return last_index+1==capacity;    
}
void Dynarray::append(int data)
{
if(ptr==nullptr)
   throw Dynarray_NOT_CREATED;
 if(is_full())
    Double_Dynarray();
  last_index++;
  ptr[last_index]=data;     
}
void Dynarray::insert(int index,int data)
{
    if(ptr==nullptr)
   throw Dynarray_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
  if(is_full())
     Double_Dynarray();
   for(int i=last_index;i>=index;i++)
        ptr[i+1]=ptr[i];
        ptr[index]=data;
        last_index++;
}
void Dynarray::edit(int index,int newdata)
{
if(ptr==nullptr)
   throw Dynarray_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
ptr[index]==newdata;   
}
void Dynarray::delte(int index)
{
if(ptr==nullptr)
   throw Dynarray_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
if(Is_empty())
    throw Dynarray_UNDERFLOW;
for(int i=index;i<=last_index;i++)
          ptr[i]=ptr[i+1];
        last_index--;
   if(capacity>1 && (last_index+1==capacity))//if capacity is 1 then it becomes true so we will add one more condtion capacity>1..
        Half_Dynarray();     
} 
int  Dynarray::get(int index)
{
if(ptr==nullptr)
   throw Dynarray_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
  return ptr[index]; 
}
int  Dynarray::count_element()
{
    if(ptr==nullptr)
       throw Dynarray_NOT_CREATED;
   return last_index+1;
}
Dynarray::~Dynarray()
{
    if(ptr!=NULL)
       delete []ptr;
}
int Dynarray::find(int data)  
{
if(ptr==nullptr)
   throw Dynarray_NOT_CREATED;
for(int i=0;i<=last_index;i++)
   if(ptr[i]==data)
       return i;
 return -1; 
}
