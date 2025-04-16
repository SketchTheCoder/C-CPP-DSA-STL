//Write a program to calculate the size of real constant.
#include<stdio.h>
int main()
{
double x;
int y;
printf("Enter a real value:");
scanf("%lf",&x);
y=sizeof(x);
printf("The size of %lf is %d",x,y);
return 0;


}