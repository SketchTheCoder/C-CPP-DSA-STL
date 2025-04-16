#include<iostream>
using namespace std;
int heighestDigit(int);
void swap(int &y,int &x);
void sort(int a[],int size,bool asc=true);
inline int printPrime(int,int);
int printPrime(int x,int y)
{
    int n,i;
    for(n=x+1;n<y;n++)
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

int highestDigit(int x)
{
    int rem,largest=0;
    while(x)
    {
        rem=x%10;
        if(rem>largest)
        {
            largest=rem;
        }
        x=x/10;
    }
 return largest;
    
}
void swap(int &y,int &x)
{
int k;
k=y;
y=x;
x=k;
}
int adddefaultarg(int a=10,int b=10)
{
    return a+b;
}
int add(int a, int b)
{
    return a+b;
}
double add(int a, double b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}
void sort(int a[],int size,bool asc =true)
{
   

   
}
int main()
{

    return 0;
}
