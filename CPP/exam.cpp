#include<iostream>
using namespace std;
void addelement(int a[],int size,int index,int element)
{
  for(int i=size-1;i>index;i--)
  {
     a[i]=a[i-1];
  }
  a[index]=element;
  for(int i=0;i<size;i++)
  cout<<a[i]<<" ";

}
int FindIndex(int a[],int size,int element)
{
for(int i=0;i<size;i++)
{
  if(a[i]==element)
    return i;
}
}
void TraversingArray(int a[],int size)
{
 for(int i=0;i<size;i++)
  cout<<a[i]<<" ";
}
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9};
//addelement(a,10,5,0);
//cout<<"Index :"<<FindIndex(a,,10,7);
//TraversingArray(a,10);
return 0;
}
