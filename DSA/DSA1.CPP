#include<iostream>
using namespace std;
#define NVALID_CAPACITY 1
#define ARRAY_NOT_CREATED 2 
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define ARRAY_UNDERFLOW 5
class array//Only make member variables in it and wirte method defination outside the class...
{
    private:
    int capacity;
    int last_index;
    int *ptr;
    public:
    array(int);
    array();
    bool is_empty();
    void create_array(int);
    void append(int);
    void insert(int ,int);
    bool isfull();
    int countelement();
    void edit(int,int);
    void delte(int);
    int get(int);
    virtual  ~array();
    int find(int); 
};
array::array(int cap)
{
    ptr=nullptr;
    if(cap<1)
         throw NVALID_CAPACITY;

    capacity=cap;
    last_index=-1;
    ptr=new int[capacity];

}
void array::create_array(int cap)//It will run if array constructor runs or not ...there two cases first array hass null as exception has occured there and other t point some array..
{
 if(cap<1)
         throw NVALID_CAPACITY;
   if( ptr!=nullptr)//got no exception there thus an array created if ptr==null then no array created there..
         delete []ptr;//deleting the memory of the previous array....if the throw case does not work...
    capacity=cap;
    last_index=-1;
    ptr=new int[capacity]; 
} 
bool array::is_empty()
{
    if(ptr==NULL)
        throw ARRAY_NOT_CREATED;
        return last_index ==-1;
    

}
void array::append(int data)
{
    if(ptr==NULL)
        throw ARRAY_NOT_CREATED;
    if(isfull())
      throw ARRAY_OVERFLOW;
  last_index++;
  ptr[last_index]=data;     
   
}
bool array::isfull()
{
    if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
    return last_index+1==capacity;   
}
void array::insert(int index,int data)
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
void array::edit(int index, int newdata)
{
      if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
 
    if(index<0 || index>=last_index+1) 
      throw INVALID_INDEX;

    ptr[index]==newdata;
}
void array::delte(int index)
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
int array::get(int index)
{
if(ptr==NULL)
   throw ARRAY_NOT_CREATED;
if(index<0 || index>=last_index+1)
   throw INVALID_INDEX;
return ptr[index];
}
int array::countelement()
{
   if(ptr==NULL)
     throw ARRAY_NOT_CREATED;
return last_index+1;
}
array::~array()
{
if(ptr!=NULL)
    delete []ptr;
}
int array::find(int data)
{
    if(ptr==NULL)
       throw ARRAY_NOT_CREATED;
   for(int i=0;i<=last_index;i++)
            if(ptr[i]==data)
              return i;
      return -1;       
}

