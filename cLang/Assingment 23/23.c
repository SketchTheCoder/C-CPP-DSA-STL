#include<stdio.h>
int lcm(int a, int b)
{
    int L;
for(L=a>b?a:b;L<=a*b;L++)
if(L%a==0 && L%b==0)
{return L;
break;
}
}
int hcf(int a, int b)
{
int H;
for(H=a<b?a:b;H>=1;H--)
if(a%H==0 && b%H==0)
{return H;
break;
}
}
int Is_prime(int n)
{
    int i;
for(i=2;i<n;i++)
{
   if(n%i==0)
   break;
}
{
     if(i==n)
    return 1;

    else
    return 0;
}
 
}
int Next_prime(int numb)
{
    while(!Is_prime(++numb))
        return numb;
}
void print_N_prime(int n)
{
int i=2;
while(n)
{
printf("%d \n",i);
Next_prime(i);

n--;
}
}
