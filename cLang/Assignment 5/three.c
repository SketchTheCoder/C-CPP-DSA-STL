//Write a program to print size of a int, a float ,a char and a double variable.
#include<stdio.h>
int main()
{
int a,b,c,d;
a=sizeof(int);
b=sizeof(char);
c=sizeof(float);
d=sizeof(double);
printf("The size of int variable is %d.\n",a);


printf("The size of char variable is %d.\n",b);

printf("The size of float variable is %d.\n",c);

printf("The size of double variable is %d.\n",d);

return 0;

}