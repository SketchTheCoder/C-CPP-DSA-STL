#include<iostream>
using namespace std;
inline int print_prime(int,int);
int print_prime(int a, int b) 
{
    int n,i;
    for(n=a+1;n<b;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }
            if(i==n)
            cout<<n<<endl;
        
    }
}
inline int largestnumber(int);
int largestnumber(int n)
{
    int large=0,rem;
    while(n>0)
    {
        rem=n%10;
        if(rem>large)
        {
            large =rem;
        }
    n=n/10;
    }
    return large;
}
inline int raisepower(int , int );
int raisepower(int x, int y)
{
    int p=1;
    while(y>0)
    {
        p=p*x;
        y--;
    }
    return p;
}
inline int present_or_not(int);
int present_or_not(int n)
{
    int a,b,c;
    a=-1;
    b=1;
    while((a+b)<n)
    {
    c=a+b;
    a=b;
    b=c;
    }
    if(a+b==n)
 return 1;

    else
   return 0;
}
 
int main()
{
   cout<<present_or_not(12);
    return 0;
}