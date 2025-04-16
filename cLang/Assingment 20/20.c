#include<stdio.h>
#include<stdlib.h>
void p1()
{
int marks;
printf("Enter the marks obtained by a student:");
scanf("%d",&marks);

switch(marks)
{

case 90 ... 100:
printf("Grade A");
break;
  
case 80 ... 89:
printf("Grade B");  
break;

case 70 ... 79:
printf("Grade C");
break;

case 60 ... 69:
printf("Grade D");
break;

case 50 ... 59:
printf("Grade E");
break;

case 0 ... 49:
printf("Grade F");
break;

default:
printf("Invalid marks");

}

}
void p2()

{
int choice,n,i=1,F=1,r,sum =0;
while(choice!=5)
{
printf("\n 1.Factorial of a number.");
printf("\n 2.Check even or odd.");
printf("\n 3.Area of circle.");
printf("\n 4.Sum of n natural numbers.");
printf("\n 5. Exit");

printf("\n Enter your choice:");
scanf("%d",&choice);

switch(choice)
{

case 1:
printf("Enter a number:");
scanf("%d",&n);

while(i<=n)
{
F *=i;
i++;
}
printf("Factorial of %d is %d",n,F);
break;

case 2:
printf("Enter a number:");
scanf("%d",&n);

if(n%2==0)
printf("%d is even.",n);
else
printf("%d is odd.",n);
break;

case 3:
printf("Enter the radius:");
scanf("%d",&r);
printf("Area of circle is %f",3.14*r*r);
break;

case 4:
printf("Enter a number:");
scanf("%d",&n);
while(i<=n)
{
sum+=i;
i++;

}
printf("Sum of %d natural numbers is %d",n,sum);
break;


case 5:
break;
}
}
}
void p3()
{
char character;
printf("Enter a character:");
scanf("%c",&character);

switch(character)
{

case 'A' ... 'Z':
printf("It is an uppercase alphabet character.");
break;

case 'a' ... 'z':
printf("It is an lowercase alphabet character.");
break;

default:
printf("It is an special character");
break;

}

}

void p4()
{
char character;
printf("Enter a character:");
scanf("%c",&character);

switch(character)
{

case 'b' ... 'd': case 'p' ... 't': case 'f' ... 'h': 
case 'j' ... 'n': case 'v' ... 'z':
printf("consonent");
break;

case 'a': case 'e': case 'i': case 'o': case 'u':
printf("vowel");
break;

default:
printf("special character");

}

}
void p5()
{
int choice,sum=0,i,a,b,c,n,L;
printf("\n 1.Find Lcm of two numbers.");
printf("\n 2.Sum of digits.");
printf("\n 3.Volume of cubiod.");
printf("\n 4.Check the number if prime or not.");
printf("\n 5.Exit");

printf("\n Enter your choice:");
scanf("%d",&choice);

switch(choice)
{

case 1:
printf("Enter two numbers:");
scanf("%d %d",&a,&b);

for(L=a>b?a:b;L<=a*b;L++)
  if (L%a==0 && L%b==0) 
  {
  printf("Lcm is %d",L) ;
break;}
break;

case 2:
printf("Enter a nummber:");
scanf("%d",&n);

while(n!=0)
{
    a=n%10;//give last digit
    sum+=a;
    n/=10;

}

printf("sum is %d",sum);
break;


case 3:
printf("Enter the length breadth and height of a cuboid.");
scanf("%d %d %d",&a,&b,&c);
printf("Volume of cuboid is %d",a*b*c);
break;


case 4:
printf("Enter a number:");
scanf("%d",&n);

for(i=2;i<n;i++)
{if(n%i==0)
break;}

if(i==n)
printf("It is a prime number.");

else
printf("NOt a prime number.");

break;



case 5:
exit(0);


}



}




int main()
{
    p4();
    return 0;
}

