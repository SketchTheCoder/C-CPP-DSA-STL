//Write a program to swap values of a int variables without using third variable and +,- operators.
#include<stdio.h>
int main()
{
int a=10,b=20;
a=a*b;
b=a/b;
a=a/b;

printf("After swapping values a is %d and b is %d",a,b);
return 0;


}