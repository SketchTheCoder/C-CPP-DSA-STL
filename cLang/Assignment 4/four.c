//Write a program to swap values of two int varaibles.
#include<stdio.h>
int main()
{

int a,b,c;
printf("Enter the a:");
scanf("%d",&a);
printf("Enter the b:");
scanf("%d",&b);
c=a+b;//we can also use z=x,x=yandy=z then we can swap.
a=c-a;
b=c-b;

printf("After swaping a is %d and b is %d",a,b);
return 0;



}