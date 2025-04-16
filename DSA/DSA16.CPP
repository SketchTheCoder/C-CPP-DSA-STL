#include<iostream>
using namespace std;
int sum(int n)
{
if(n=1)
    return 1;
return n+sum(n-1);  
}
int sumodd(int n)
{
    if(n=1)
       return 1;
 return (2*n-1)+sumodd(n-1);
}
int sumeven(int n)
{
    if(n=1)
      return 2;
 return (2*n)+sumeven(n-1);
    
}
int sumsquare(int n)
{
    if(n=1)
        return 1;
 return n*n+sumsquare(n-1);
    
}
int sumcube(int n)
{
    if(n=1)
        return 1;
 return n*n*n+sumcube(n-1);
    
}
int fact(int n)
{
    if(n=1)
       return 1;
  return n*fact(n-1);
}
int sumdigits(int n)
{
    if(n=0)
         return 0;
return n%10+sumdigits(n/10);
}
void binary(int n)
{
    if(n>1)
    {
        if(n>0)
        {
            binary(n/2);
            cout<<n%2;
        }
       
    }
}
int power(int x,int y)
{
    if(y==0)
      return 1;
 return x*power(x,y-1);
}
int fib(int n)
{
    if(n==0||n==1)
      return n;
 return fib(n-1)+fib(n-2);
}
int hcf(int a,int b)
{
 if(a>b)
{
if(b%a==0)
       return b;
  else 
  return hcf(a%b,b);     
}
else{
    if(b%a==0)
      return a;
   else
   return hcf(a,b%a);
}
}
int main()
{
 //cout<<sum(10);
  //cout<<sumodd(5);
  binary(5);
    return 0;
}