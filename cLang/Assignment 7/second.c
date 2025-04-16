//Write a program to check wether a giiven number is divisble by 5 or not.
#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);

if(a%5==0)//we can also use (a%5) this if its has 0 then it is false but if it has an integer then we get true thus if we use this we need to change if and else staement.
{
printf("The number is  divisble by 5");

}
else{

printf("The number is not divisible by 5.");


}
    
return 0;   
}

