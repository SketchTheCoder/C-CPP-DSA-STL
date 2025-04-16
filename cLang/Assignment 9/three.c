//Write a program to check wheter a given number is a uppercase or lower case.
#include<stdio.h>
int main()
{
char x;
int y;
printf("Enter a Alphabet:");
scanf("%c",&x);


y=("%d",x);

if(y>64&y<91)
{printf("It is an uppercase alphabet.");

}
else if(y>96&y<123)
{
    printf("It is an lowercase alphabet.");
}
else{
    printf("It is not an alphabet.");
}

return 0;

}