//Write a program to find the area of the circle. Take radius of circle as input from user as input.
#include<stdio.h>
int main()
{
int r;
float a;
printf("Enter the value of radius:");
scanf("%d",&r);

a= 3.14*r*r;
printf("Area of the circle is %f",a);
return 0;


}