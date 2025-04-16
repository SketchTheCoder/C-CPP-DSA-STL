//Write a program to make last digit of a number stored in a variable as zero.
//example=if x=2345 then make it x=2340
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=x/10;
printf("It stores in variable as %d",y*10);
return 0;



}