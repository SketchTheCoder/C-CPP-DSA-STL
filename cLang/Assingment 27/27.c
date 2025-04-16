#include<stdio.h>
int print_sum(int n)
{
    if(n==1)
    return 1;
   
   return n+print_sum(n-1);
}
int print_sum_odd(int n)
{
if(n==1)
return 1;

return (2*n-1) + print_sum_odd(n-1);
}
int print_sum_even(int n)
{
    if(n==1)
    return 2;

    return (2*n) + print_sum_even(n-1);
}
int print_sum_square(int n)
{ 
    if(n==1)
    return 1;

    return n*n + print_sum_square(n-1);
}
int print_sum_digits(int n)
{
    if(n==0)
    return 0;

    return n%10 + print_sum_digits(n/10);
}

int main()
{
   printf("%d", print_sum_digits(466));
   return 0;

}