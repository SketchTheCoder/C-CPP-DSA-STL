#include<iostream>
using namespace std;
void InsertElement(int abc[],int size) 
{
int i,n,m;
cout<<"Enter position where u want to insert elemet: ";
cin>>m;
if(m<0 || m>size)
  {
    cout<<"Invalid index:"; 
  }
  else{ 
cout<<"Enter number u want to insert:";
cin>>n;

for(i=size-1;i>=m;i--)
{
    abc[i]=abc[i-1];
}
abc[m-1]=n;
cout<<"array:\n";
for(i=0;i<10;i++)
{  cout<<abc[i]<<endl;
}
}
}
void deleteElement(int xyz[],int size, int element) 
{
//Delete element    
int i,index;
for(i=0;i<size;i++)
{
if(xyz[i]==element)
  {
   index=i; 
}
}
for(i=index;i<size;i++)
{
    xyz[i]=xyz[i+1];
}
cout<<"Array after deletion:\n";
for(i=0;i<size-1;i++)
{ 
    cout<<xyz[i]<<endl;
}
}
int main()
{
    int abc[10]={9,9,9,9,9,9,9,9,9};
    InsertElement(abc,10);
    int xyz[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"\n ";
    deleteElement(xyz,10,7);
    return 0;
}

