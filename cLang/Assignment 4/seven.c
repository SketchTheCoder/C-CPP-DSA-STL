//Write a program to swap values of int variables without using third variable and ariethmatic operators.
#include<stdio.h>
int main()
{
int a=5,b=10;
a=a^b;
b=a^b;
a=a^b;

printf("%d %d",a,b);


return 0;



}