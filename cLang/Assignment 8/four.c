//Write a program to check wehter a given year is leap year or not.

#include<stdio.h>
int main()
{
int x;
printf("Enter a year:");
scanf("%d",&x);

if(x%100==0){
   if(x%400==0)
   {
    printf("this is a leap year.");
   }
else 
{
    printf("This is not a leap year");

}
}
else if (x%4==0)
{
    printf(" leap year");

}
else{
    printf("not a leap year.");
}


return 0;

}