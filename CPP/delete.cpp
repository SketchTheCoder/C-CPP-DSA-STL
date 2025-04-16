//TO delete A ELEMENT IN A ARRY
#include<iostream>
using namespace std;
int main() 
{
int a[10]={1,2,3,4,5,6,7,8,9,10},i,index,size=10;
cout<<"Enter the value of index: ";
cin>>index;
for(i=index;i<size;i++)
{
    a[i]=a[i+1];
}
cout<<"array:\n";
for(i=0;i<size-1;i++)
{
    
    cout<<a[i]<<endl;
}
return 0;
}