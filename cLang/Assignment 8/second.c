//Write a program to print grater between two numbers. Print one number if both are the same.
#include<stdio.h>
int main()
{
int x,y;
printf("Enter two numbers:");
scanf("%d%d",&x,&y);


if(x>y)
{
printf("The bigger number is %d",x);



}
else {
    printf("The biggest number is %d",y);
}

return 0;

}