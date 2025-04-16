#include<stdio.h>
void prime_between_two_numbers(int a, int b)
{
    int i,n;
for( n=a+1;n<b;n++)
{
for(i=2;i<n;i++)
if(n%i==0)
break;

if (i==n)
printf("\n %d",n);
}
}
void print_n_fibonacci(int N)
{
int a=-1,b=1,c;
while(N)
{
c=a+b;
a=b;
b=c;
N--;
printf("\n %d",c);
}
}
void pascal_triangle(int lines)
{
int i,j,n,r;
for(i=1;i<=lines;i++)
{
    n=i-1;
    r=0;
    int s=1;
for(j=1;j<=2*lines-1;j++)
{
if(j>=lines+1-i && j<=lines -1+i)
{
if(s)
{
printf("3%d ",combi(n,r++));
}
else
printf("  ");
s=1-s;
}
else
printf("  ");
}
printf("\n");
}
}
int count_digits(int numb)
{
    int count =0;
    while(numb)
    {
        numb=numb/10;
        count++;
    }
    return count;
}

int power(int x, int y)
{
int p,i;
for(p=1,i=1;i<=y;i++)
p=p*x;
return p;
}
int sum_digits_of_power(int numb, int n)
{
    int s=0;
    while(numb)
{
    s=s+power(numb%10,n);
    numb/=10;
}
return s;
}



int is_armstrong(int x)
{
    int n;
    n=count_digits(x);
    if(x==sum_digits_of_power(x,n))
           return 1;

        else
        return 0;
}

void armstrong_number(int a, int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        if(is_armstrong(x))
        printf("%d",x);
    }
}
int sum_of_series(int n)
{
    int s,i;
    for(i=1,s=0;i<=n;i++)
    s=s+fact(i)/i;
    return s;
}
int main()
{
  sum_of_series(5);
  
    return 0;
}