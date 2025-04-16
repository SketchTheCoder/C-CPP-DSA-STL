//sum of N numbers.
#include<stdio.h>
void p1()
{
int i,N,sum=0;

printf("Enter a number:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
sum+=i;//we only write printf in loop when we need to repeat a statement.
}
printf("Sum of first %d natural number is \n %d ",N,sum);


}
//N even natural numbers sum
#include<stdio.h>
void p2()
{
int i,N,sum=0;
printf("Enter a number:");
scanf("%d",&N);

for(i=2;i<=2*N;i=i+2)
{
    sum+=i;
}
printf("sum of first %d even numbers is \n %d ",N,sum);



}
//sum of first N odd number
#include<stdio.h>
void p3()
{
    
int i,N,sum=0;
printf("Enter a number:");
scanf("%d",&N);

for(i=1;i<=2*N;i=i+2)
{
sum+=i;
}
printf("sum of first %d odd natural numbers is  %d",N,sum);

}
//sum of squares of first n natural numbers.
#include<stdio.h>
void p4()
{

int i,N,sum=0;
printf("Enter a number:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{

   sum+=i*i;
}

printf("sum of squares of first %d natural number is %d ",N,sum );



}
//sum of cubes of first n natural numbers
#include<stdio.h>
void p5()
{

int i,N,sum=0;
printf("Enter a number:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
 sum+=i*i*i;
}

printf("sum of cubes of first %d natural number is %d ",N,sum );


}
int main()
{
p4();
return 0;
}
