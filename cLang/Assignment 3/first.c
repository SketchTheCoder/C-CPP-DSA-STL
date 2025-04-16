//Write a program to take input character from user and print its ascii code.
#include<stdio.h>
int main()
{
    
char a;
printf("Enter a character:");
scanf("%c",&a);//It always stores its ascii code so, if we use %d it print ascii code.

printf("\n ASCII code of character is %d",a);
return 0;

}