#include<iostream>
using namespace std;
template<class X>
X Greater(X a,X b)
{
if(a>=b)
  return a;
  else
  return b;
}
template<class X>
X Smaller(X a,X b)
{
if(a<=b)
return a;
else
return b;
}
template<class X>
void array(X a[],int size)
{
for(int i=0;i<size;i++)
  cout<<a[i]<<" ";
}
template<class X>
void sort(X a[],int size)
{
    int n=size,i;
    while(n-1)
    {
        for(i=0;i<size;i++)
        {
            if(a[i]>a[i+1])
            {
            int t;
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            }
        }
    }
}
template<class X>
X largestinarray(X a[],int size)
{
    X large=a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>large)
          large=a[i];
    }
    return large;
}