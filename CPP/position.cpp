#include<iostream>
using namespace std;
int main() 
{
int a[]={1,2,3,4,5,6,7,8,9,10},i,m,n,size=10;
cout<<"Enter element whose position you want to know: ";
cin>>n;

for(i=0;i<size;i++)
{
    if(a[i]==n)
    break;
}
m=i+1;

cout<<"Position is :"<<m;
return 0;
}