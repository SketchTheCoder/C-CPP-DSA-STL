#include<stdio.h>
float area(int r)
{
return 3.14*r*r;
}

float simple_interest(int p, int r, int t)
{
  return p*r*t/100;
}

int Is_even(int n)
{
return n%2==0?1:0;
}

void printN(int n)
{
int i;
for(i=1;i<=n;i++)
printf("%d",i);
}

void print_oddN(int n)
{
  int i;
  for(i=1;i<=n;i+2)
  printf("%d",i);
}

