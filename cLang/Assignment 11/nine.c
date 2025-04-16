//write a program to print cubes of first 10 natural numbers.
#include<stdio.h>
int main()
{
int i=1,j=1;
while(i>=1 && i<=10)
{
printf("%d\n",j);
i++;
j=i*i*i;

}

return 0;
}