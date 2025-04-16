#include<stdio.h>

void printNreverse_even(int n)
{
    if(n>0)
    {
        printf(" \n %d",2*n);
        printNreverse_even(n-1);
    }
}
void printNsquare(int n)
{
    if(n>0)
    {
        printNsquare(n-1);
        printf(" \n %d",n*n);
    }
}
void print_binary_n(int n)
{
    if(n>0)
    {
    print_binary_n(n/2);
    printf("%d",n%2);
    }
}
int print_octal(int n)
{
    if(n>0)
    {
        print_octal(n/8);
        printf("%d",n%8);
    }
}
int print_reverse_of_N(int n)
{
    if(n>0)
    {
      printf("%d",n%10); 
      print_reverse_of_N(n/10);
    }
}
int main()
{
    print_binary_n(4);
    return 0;
}