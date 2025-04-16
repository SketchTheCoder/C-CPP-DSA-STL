//Write a program to check wether a number is three digit or not.
#include<stdio.h>
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);

if(x>99&x<=999)
{printf("The number is three digit.");

}
else{
    printf("The number is not three digit.");
}

return 0;
}