//Write a program to convert inr to usd.(1usd = 84.23inr)
#include<stdio.h>
int main()
{
int ir;
float ud;
printf("Enter ammount in INR:");
scanf("%d",&ir);
ud=ir/84.23;
printf("The %d inr is %.2f in usd",ir,ud);//.2 before %f gives only two digit after point.
return 0;




}