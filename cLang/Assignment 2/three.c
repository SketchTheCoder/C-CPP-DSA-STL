//Write a program to calculate simple interest.
#include<stdio.h>
int main()
{
int p,t,r;//p is principle , t is time and r is rate.
float s;
printf("Enter principle amount:");
scanf("%d",&p);
printf("Enter time period:");
scanf("%d",&t);
printf("Enter the rate percentage:");
scanf("%d",&r);
s=p*r*t/100.0;
printf("Simple interest is %f",s);
return 0;





}