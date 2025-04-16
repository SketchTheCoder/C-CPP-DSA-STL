//Write a question check wehter a given number is positve or non-positive.
#include<stdio.h>
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);
//0 is neither positive nor negative number.
if(x>0)
{
printf("Number is positive ");


}
if(x<=0)
{

printf("Number is non-positive");

}
return 0;
}