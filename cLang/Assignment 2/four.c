//write a program to calculate volume of cubiod.
#include<stdio.h>
int main()
{
int l,b,h,v;
printf("Enter the length of cuboid:");
scanf("%d",&l);
printf("Enter the breath of cuboid:");
scanf("%d",&b);
printf("Enter the height of cuboid:");
scanf("%d",&h);
v=l*b*h;
printf("Volume of cuboid is %d",v);
return 0;


}