//Write a program to check wether roots of a quadratic equation are real and distinct,real and equal or imaginory.
#include<stdio.h>
int main()
{
int a,b,c,D;
char x;
a*x*x+b*x+c;//Any quadratic equation.

printf("Enter coffecient of x square, x and constant term:");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
{
printf("Roots are real and distinct.");


}
else if(D==0)
{
printf("Roots are real and equal.");


}

else{
printf("Roots are imaginary.");


}

return 0;
}