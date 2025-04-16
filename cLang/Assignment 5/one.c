//Write a program to input three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{

int x,y,z,a,b,sum;
printf("Enter a three digit number:");
scanf("%d",&x);
y=x%10;//give last digit of x.
z=x/10;//first two digit of x.
a=z%10;//give middle term of x.
b=x/100;//give first term of x.
sum=b+a+y;
printf("Sum of the digits of the number is %d",sum);
return 0;



}