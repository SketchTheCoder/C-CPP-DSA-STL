//write a program to check wether a number is even or odd without using % operator.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);

if(x/2*2==x)
{
    printf("Number is even");

}
else{
    printf("Number is odd");
}
return 0;



}