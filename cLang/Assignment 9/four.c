//Write a program to check wheter a given number is divisble by 3 and 2.
#include<stdio.h>
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x%6==0)
{
    printf("The number is divisble by 2 and 3.");
}



else{
printf("The number is not divisble by 2 and 3.");    
}


}