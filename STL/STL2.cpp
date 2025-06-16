#include<iostream>
using namespace std;
#define NVALID_CAPACITY 1
#define ARRAY_NOT_CREATED 2 
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define ARRAY_UNDERFLOW 5
#define LINK_LIST_UNDERFLOW 6
template<class X>
class array//Only make member variables in it and wirte method defination outside the class...
{
    private:
    int capacity;
    int last_index;
    X *ptr;
    public:
    array(int);
    array();
    bool is_empty();
    void create_array(int);
    void append(X);
    void insert(int ,X);
    bool isfull();
    int countelement();
    void edit(int,X);
    void delte(int);
    X get(int);
    virtual  ~array();
    int find(X); 
};
template<class X>
array<X>::array(int cap)
{
    ptr=nullptr;
    if(cap<1)
         throw NVALID_CAPACITY;

    capacity=cap;
    last_index=-1;
    ptr=new int[capacity];

}
template<class X>
void array<X>::create_array(int cap)//It will run if array constructor runs or not ...there two cases first array hass null as exception has occured there and other t point some array..
{
 if(cap<1)
         throw NVALID_CAPACITY;
   if( ptr!=nullptr)//got no exception there thus an array created if ptr==null then no array created there..
         delete []ptr;//deleting the memory of the previous array....if the throw case does not work...
    capacity=cap;
    last_index=-1;
    ptr=new X[capacity]; 
} 
template<class X>
bool array<X>::is_empty()
{
    if(ptr==NULL)
        throw ARRAY_NOT_CREATED;
        return last_index ==-1;
    

}
template<class X>
void array<X>::append(X data)
{
    if(ptr==NULL)
        throw ARRAY_NOT_CREATED;
    if(isfull())
      throw ARRAY_OVERFLOW;
  last_index++;
  ptr[last_index]=data;     
   
}
template<class X>
bool array<X>::isfull()
{
    if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
    return last_index+1==capacity;   
}
template<class X>
void array<X>::insert(int index,X data)
{
    if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
    if(isfull())
       throw ARRAY_OVERFLOW;

    if(index<0 || index>=last_index+1) 
      throw INVALID_INDEX;

    for(int i=last_index;i>=index;i++)  
        ptr[i+1]=ptr[i];
    ptr[index]==data;    
    last_index++;
}
template<class X>
void array<X>::edit(int index, X newdata)
{
      if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
 
    if(index<0 || index>=last_index+1) 
      throw INVALID_INDEX;

    ptr[index]==newdata;
}
template<class X>
void array<X>::delte(int index)
{
 if(ptr==NULL)
   throw ARRAY_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
if(is_empty())
    throw ARRAY_UNDERFLOW;   

for(int i=index;i<=last_index;i++)
    ptr[i]=ptr[i+1];
last_index--;
}
template<class X>
X array<X>::get(int index)
{
if(ptr==NULL)
   throw ARRAY_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
return ptr[index];
}
template<class X>
int array<X>::countelement()
{
   if(ptr==NULL)
     throw ARRAY_NOT_CREATED;
return last_index+1;
}
template<class X>
array<X>::~array()
{
if(ptr!=NULL)
    delete []ptr;
}
template<class X>
int array<X>::find(X data)
{
    if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
   for(int i=0;i<=last_index;i++)
            if(ptr[i]==data)
              return i;
      return -1;       
}
template<class X>
struct node
{
    X item;
    node *next;
};
template<class X>
class SLL
{
    private:
    node *start;
    public:
    SLL();
    void insertatBegining(X);
    void insertatLast(X);
    void insertatspecified(X);
    void deletefirstnode();
    void deletelastnode();
    void deletespicific(X);
    ~SLL();
}; 
template<class X>
SLL<X>::SLL()
{
    start==nullptr;
}
template<class X>
void SLL<X>::insertatBegining(X data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
template<class X>
void SLL<X>::insertatLast(X data)
{
    node *n=new node;
   n->item=data;
   n->next=nullptr;
   if(start==nullptr)//there is no list thus first element will be the last..
      start=n;
   else
   {
   node *temp=start;//we created a temparoray pointer for traversing..
   while(temp->next!=nullptr)
       temp=temp->next;//it will traverse until it reaches the last node and temp will have last node adress
    temp->next=n;
   }
}
template<class X>
void SLL<X>::insertatspecified(X data)//t is the pointer of that node after which we need to insert t hold addres of next node
{
    if(t!=nullptr)
       {
        node *n=new node;
        n->item=data;
        n->next=t->next; 
        t->next=n;
       }
}
template<class X>
void SLL<X>::deletefirstnode()
{
    if(start==nullptr)
      throw LINK_LIST_UNDERFLOW;
    node *temp=start;
    start=start->next;
    delete temp;
}
template<class X>
void SLL<X>::deletelastnode()
{
    if(start==nullptr)
          throw LINK_LIST_UNDERFLOW;
    if(start->next==nullptr)  
        {
            delete start;
            start=nullptr;
        }
        else
        {
       node *temp=start;
           while(temp->next->next!=nullptr)
                { 
                    temp=temp->next;        
        }
        delete temp->next;
        temp->next=nullptr;
}
}
template<class X>
void SLL<X>::deletespicific(X data)
{
    if(start==nullptr)
       throw LINK_LIST_UNDERFLOW;
node *t1,*t2;
t1=start;
t2=nullptr;
while(t1!=nullptr)
{
    if(t1->item==data)
       break;
       t2=t1;
    t1=t1->next;
}
if(t2==nullptr)
    deletefirstnode();
if(t1!=nullptr)
     {
        t2->next=t1->next;
        delete t1;
     }
}
template<class X>
SLL<X>::~SLL()
{
    while(start!=nullptr)
       deletefirstnode();
    
}





