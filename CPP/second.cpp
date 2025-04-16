#include<iostream>
using namespace std;
int main()
{
int f=1,i,n;
cout<<"Enter a number:";
cin>>n;
for(i=n;i>1;i--)
{
    f=f*i;
}
cout<<"Factorial is "<<f;
return 0;
}