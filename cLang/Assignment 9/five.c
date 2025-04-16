//Write a program to check whether a given number is divisble by 7 or 3.
#include<stdio.h>
int main()
{


int x;
printf("Enter a number:");
scanf("%d",&x);


if(x%7==0 || x%3==0)
{
printf("Number is divisble by 3 or 7");


}

else{
    printf("Number is not divisble by  3 or 7");
}


return 0;

}