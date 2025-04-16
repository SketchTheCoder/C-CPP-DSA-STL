#include<iostream>
using namespace std;
#define INVALID_STACK 0
#define INVALID_CAPACITY 1
#define STACK_OVERFLOW 2
#define STACK_UNDERFLOW 3
class stack{
private:
int capacity;
int top;
int *ptr;
public:
stack(int);
void push(int);
bool isfull();
bool isempty();
int peek();
void pop();
~stack();
int getcapacity();
};
stack::stack(int cap)
{
   ptr=nullptr;
   if(cap<1)
      throw INVALID_CAPACITY;
    capacity=cap;
    top=-1;
    ptr=new int[cap];
}
void stack::push(int data)
{
if(ptr==nullptr)
   throw INVALID_STACK;
if(isfull())   
   throw STACK_OVERFLOW;
top++;
ptr[top]=data;   
}
bool stack::isfull()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
  return top=capacity-1;
}
bool stack::isempty()
{
if(ptr==nullptr)
     throw INVALID_STACK;
  return top==-1;   
}
int stack::peek()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    if(isempty())
        throw STACK_UNDERFLOW;
    return ptr[top];        
}
void stack::pop()
{
if(ptr==nullptr)
    throw INVALID_STACK;
if(isempty())
    throw STACK_UNDERFLOW;
top--;    
}
stack::~stack()
{
delete []ptr;
}
int stack::getcapacity()
{
    if(ptr==nullptr)
       throw INVALID_STACK;
    return capacity;   
}
void reverse(stack &s1)
{  
    try{
      stack s2(s1.getcapacity()),s3(s1.getcapacity());
       while(!s1.isempty())
            {
            s2.push(s1.peek());
            s1.pop();
              }
              while(!s2.isempty())
              {
                s3.push(s2.peek());
                s2.pop();
                  }
            while(!s3.isempty())
            {
                s1.push(s3.peek());
                s3.pop();
            }
              }
catch(int e)
{
switch(e)
{
    case  INVALID_STACK :
         cout<<"Stack is not valid";
         break;
    case INVALID_CAPACITY :
        cout<<"Stack cannpt be intilaized with invalid capacity";
        break;
    case STACK_OVERFLOW :
         cout<<"Stack is full";
         break;
     case STACK_UNDERFLOW :
       cout<<"Stack is empty";
       break;
       default:
       cout<<"Invalid stack operation";
}
}
}
//to track the minium element in stack
class superstack{
      private:
          stack *sptr1,*sptr2;
       public:
       superstack(int cap)
       {
        sptr1=new stack(cap);
        sptr2=new stack(cap);
       }  
     void push(int data)
     {
        sptr1->push(data);
        if(sptr2->isempty())
            sptr2->push(data);
        else
          if(sptr2->peek()>data)
            sptr2->push(data);
         else
           sptr2->push(sptr2->peek());                   
     } 
      void pop()
      {
        sptr1->pop();
        sptr2->pop();
      } 
     int getMinium()
     {
        return sptr2->peek();
     } 
};
int main()
{
    superstack s1(6);
    s1.push(29);
    cout<<"minium"<<s1.getMinium()<<endl;
    s1.push(30);
    cout<<"minium"<<s1.getMinium()<<endl;
    s1.push(10);
    cout<<"minium"<<s1.getMinium()<<endl;
    //s1.pop();
    //cout<<"minium"<<s1.getMinium()<<endl;
    //s1.pop();
    //cout<<"minium"<<s1.getMinium()<<endl;
    return 0;
}