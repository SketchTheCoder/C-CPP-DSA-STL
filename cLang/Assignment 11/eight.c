//write a program to print square of the first 10 natural numbers.
#include<stdio.h>
int main()
{
int i=1,j=1;
while(i>=1 && i<=10)//either use this or set j>=1 && j<=100.
{
printf("%d\n",j);
i++;
j=i*i;


}
return 0;





}