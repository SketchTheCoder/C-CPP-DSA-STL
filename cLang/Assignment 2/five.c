//Write a program to ask user the cost price and selling price banana per dozen. calculate the profit or loss upon selling 25 bananas.
#include<stdio.h>
int main()
{
int cp,sp,p;
float o;
printf("Enter the cost price of 12 banana:");
scanf("%d",&cp);
printf("Enter the selling price 12 banana:");
scanf("%d",&sp);

p=sp-cp;//on 12 bananas
o=p/12.0;//profit of one bananas

printf("Profit earned after selling 25 bananas is %f",25*o);//here we have used unitary method.
return 0;








}