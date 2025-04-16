//Write a program to print the last digit of a given number.
#include<stdio.h>
int main()
{
int a,ld;
printf("Enter a number:");
scanf("%d",&a);
ld=a% 10;//Modula division gives the reaminder.
printf("The last digti of the number is %d", ld);
return 0;

}