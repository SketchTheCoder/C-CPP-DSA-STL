//Write a program to calculate average of three integers. Numbers are given by the user.
#include<stdio.h>
int main()
{
int a,b,c;
float r;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
r=(a+b+c)/3.0;//3.0 isliye likha kuki dono int hoge toh sirf int output ayega.
printf("Avergae of three numbers is %f",r);
return 0;

}