#include<iostream>
using namespace std;
#define STACK_UNDERFLOW 0
struct node{
int item;
node *next;
};
class stack
{
private:
node *top;
public:
stack();
void push(int);
void pop();
int peek();
~stack();
bool isempty();
};
stack::stack()
{
top=nullptr;
}
void stack::push(int data)
{
    node *n=new node;    
    n->item=data;
    n->next=top;//Even if top=nullptr,then n->next will get nullptr and top gets n.....
    top=n;
}
int stack::peek()
{
    if(top==nullptr)
         throw STACK_UNDERFLOW;
return top->item;   
}
void stack::pop()
{
    if(top==nullptr)
       throw STACK_UNDERFLOW;
    node *temp;
    temp=top;   
    top=top->next;
    delete temp;
}
stack::~stack()
{
    while(top!=nullptr)
       pop();   
}
void reversestack(stack &s1)
{
stack s2,s3;
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
bool stack::isempty()
{
    return top==nullptr;
}
int countdigits(int num)
{
    int count=0;
    while(num)
    {
        num/=10;
        count++;
    }
    return count;
}
bool ispalindrome(int num)
{
stack s1;
int n= countdigits(num);
int i=1;
while(i<=n/2)
{
    s1.push(num%10);
    num/=10;
    i++;
}
if(n%2)
  num/=10;
while(!s1.isempty())
{
    if(s1.peek()!=num%10)
       return false;
    s1.pop();
    num/=10; 
}
return true;
}


