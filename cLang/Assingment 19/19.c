#include<stdio.h>
void p1()
{
int n;
printf("Enter the month number:");
scanf("%d",&n);
switch(n)
{

  case 1: case 3: case 5: case 7:
  case 8: case 10: case 12:

  printf("It has 31 days");
break;

case 2:
  printf("It has 28 days");
break;

case 4: case 6: case 9: case 11: 
  printf("It has 30 days");
break;

default:
printf("Invalid month");
break;


}



}
void p2()
{
int a,b,choice;
printf("\n 1.Addition");
printf("\n 2.Subtraction");
printf("\n 3.Product");
printf("\n 4.Division");
printf("\n 5.Exit");
printf("\n Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{

case 1:
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf("Sum is %d ",a+b);
break;

case 2:
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf("Difference is %d ",a-b);
break;

case 3:
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf("product is %d ",a*b);
break;

case 4:
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf("Quotient is %d ",a/b);
break;

case 5:
break;

}

}

void p3()
{
int x;
printf("Enter the number of a day in a week :");
scanf("%d",&x);

switch(x)
{
case 1:
printf("Good morning its monday");
break;

case 2:
printf("Have a nice day its tuedasy");
break;

case 3:
printf("Good work its wednesday");
break;

case 4:
printf("Keep it up its thhursday");
break;

case 5:
printf("Don't give up its friday");
break;

case 6:
printf("You are a winner its saturady");
break;

case 7:
printf("I miss u its sunday");
break;

}

}
void p4()
{
int choice,a,b,c;
printf("\n 1. check if these sides are of an isosceles triangle or not.");
printf("\n 2.check if it is right angle triangle or not.");
printf("\n 3. check if it is a equilateral triangle or not.");
printf("\n Enter a choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the sides of a triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a==b | b==c | a==c)
{
    printf("It is an isosceles triangle");
}
else{
    printf("It is not an isosceles triangle");
}
break;

case 2:
printf("Enter the sides of a triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a*a== b*b + c*c | b*b== a*a + c*c | c*c== a*a + b*b)
printf("It is a right angle triangle ");
 else
 printf("it is not a right triangle");

 break;

 case 3:
 printf("Enter the sides of a triangle:");
scanf("%d %d %d",&a,&b,&c);
if (a==b==c)
printf("it is an equalatrial triangle");
else 
printf("It is not a equalatiral triangle");

break;

case 4:
break;

}

}
void p5()
{
int var;
printf("Enter a var:");
scanf("%d",&var);


switch(var)
{
case 1:
 printf("good");
 break;

 case 2:
 printf("better");
 break;

 case 3:
 printf("best");
break;

 default:
 printf("Invalid");
}




}

int main()
{
    p3();
    return 0;
}