//write a program to print table of 5.
#include<stdio.h>
int main()
{
int i=1,j=5;
while(i>=1 && i<=10)
{
printf("%d\n",j);
i++;
j=5*i;
}    
return 0;
}