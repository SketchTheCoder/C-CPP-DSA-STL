//Write a program to check wheter a given number is an even number or an odd number using bitwise operator.
#include<stdio.h>
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);


if(x&1)
{
printf("Number is odd");


}
else{

printf("Number is even");


}

return 0;

}