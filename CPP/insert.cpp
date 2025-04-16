//TO INSERT A ELEMENT IN A ARRY
#include<iostream>
using namespace std;
int main() 
{
int a[10]={1,2,3,4,5,6,7,8,9},i,n,m,size=10;
cout<<"Enter position where u want to insert elemet: ";
cin>>m;

cout<<"Enter number u want to insert:";
cin>>n;

for(i=size-1;i>=m;i--)
{
    a[i]=a[i-1];
}
a[m-1]=n;
cout<<"array:\n";
for(i=0;i<10;i++)
{
    
    cout<<a[i]<<endl;
}
return 0;
}