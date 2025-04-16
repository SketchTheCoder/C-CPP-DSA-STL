//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
int x;
printf("Enter the month number:");
scanf("%d",&x);

if(x<=7&x%2!=0)
{
    printf("It has 31 days.");

}
else if(x>7&x%2==0)
{
printf("It has 31 days");
}

else if(x==2)
{
    printf("It has 28 days.");
}
else{
    printf("It has 30 days.");

}
return 0;


}