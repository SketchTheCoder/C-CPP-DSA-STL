#include<stdio.h>
int print_fact(int n)
{
    if(n==0)
    return 1;
 
    return n*print_fact(n-1);
}
int print_hcf(int a, int b)
{
if (a>b)
{
  if(a%b==0)
  return b;
return print_hcf(a%b,b);

}
else
{
  if(b%a==0)
  return a;
  return print_hcf(a,b%a);
}
}
void print_fib(int n, int a, int b)//a should be written as -1 and b as 1 while calling the function.
{
    if(n>=0)
    {
      printf(" \n %d",a+b);
      print_fib(n-1,b,a+b);
    }     
}

int count_digit(int n)
{
if(n==0)
return 0;
return 1+count_digit(n/10);
}
double power_of_numb(double x, double y)
{
  if(y==0)
      return 1;
  if (y>0)
       return x*power_of_numb(x,y-1);
  else
      return 1/x*power_of_numb(x,y+1);
}

int main()
{
printf("%.2lf",power_of_numb(10,-2));
  return 0;
}