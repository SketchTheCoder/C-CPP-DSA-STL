//Write a program to take three character input from user and print there ascii code.
#include<stdio.h>
int main()
{
char a,b,C;
printf("Enter the characters:");
scanf("%c %c %c",&a,&b,&C);//we can mention delimter here in scanf that we will separate our character by ,or space or enter.
//if we used other thing than delimeter that we set that it will take that thing thing as character.
printf("\n The ASCII code of %c is %d",a,a);
printf("\n The ASCII code of %c is %d",b,b);
printf("\n The ASCII code of %c is %d",C,C);
return 0;


}