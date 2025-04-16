#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
     f*=i;

return f;
}

int combi(int n, int r)//combination
{
    return fact(n)/fact(n-r)/fact(r);
}

int arrange(int n, int r)//permutation
{
    return fact(n)/fact(n-r);
}

int Contains_digit(int numb, int digit)
{
while(numb)
{
    if(numb%10==digit)
      return 1;

     numb/10;
}
return 0;
}

int Is_prime(int n)
{
   int i;
   for(i=2;i<n;i++)
   if(n%i==0)
   return 0;

 return 1;   
}
int next_pirme(int numb)
{
    while(!Is_prime(numb++))
    return numb;
} 

void print_all_prime_factors(int n)
{
    int i=2;
   while(n>1)
   {
    while(n%i==0)
    {
        printf("%d",i);
        n/=i;
    }
    i=next_pirme(i);
   }
}