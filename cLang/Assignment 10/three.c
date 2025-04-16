//check whether it is a valid triangle or not.(sum of any two sides must be greater than the third side.)
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the sides of the triangle:");
scanf("%d%d%d",&a,&b,&c);

if(a+b>c&a+c>b&b+c>a)
{
    printf("The given triangle is a valid triangle.");
}

else{
    printf("The given triangle is not a valid triangle.");
}
return 0;


}
