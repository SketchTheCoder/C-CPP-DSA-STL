//Write a program to swap values of int varaibles without using a third variable.
#include<stdio.h>
int main()
{
int a=12,b=20;

a=a+b;
b=a-b;
a=a-b;

printf("After swapping values a is %d and b is %d",a,b);
return 0;



}