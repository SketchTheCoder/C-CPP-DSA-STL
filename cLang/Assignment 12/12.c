//Write a program to print MySirG N times on the screen.
#include<stdio.h>
int p1()
{
int i=1, N;
printf("Enter the valuse of N:");
scanf("%d",&N);

while(i>=1 & i<=N)
{
    printf("MySirG\n");
    i++;
}

return 0;


}
//write a program to print the first N natural numbers.
#include<stdio.h>
int p2()
{
int i=1,N;
printf("Enter a number:");
scanf("%d",&N);
while(i>=1 & i<=N)
{
    printf("%d\n",i);
    i++;
}
return 0;





}
//same as second but reverse order.
#include<stdio.h>
int p3()
{
int i,N;
printf("Enter a number:");
scanf("%d",&N);
i=N;
while(i<=N & i>=1)
{
    printf("%d\n",i);
    i--;
}
return 0;

}
//N odd natural numbers print.
#include<stdio.h>
int p4()
{
int i=1,N;
printf("Enter a number:");
scanf("%d",&N);
while(i>=1 & i<=N)
{
    printf("%d\n",i);
    i=i+2;
}
return 0;


}
//N natural odd numbers in reverse order.
#include<stdio.h>
int p5()
{
int i=1,N;
printf("ENter a number:");
scanf("%d",&N);
i=N;
while(i<=N & i>=1)
{
printf("%d\n",i);
i=i-2;

}
return 0;
}
//N natural even numbers .
#include<stdio.h>
int p6()
{
int i=2,N;
printf("ENter a number:");
scanf("%d",&N);
while(i>=2 & i<=N)
{
    printf("%d\n",i);
    i=i+2;
}
return 0;



}
//in reverse order.
#include<stdio.h>
int p7()
{
int i,N;
printf("ENter a number:");
scanf("%d",&N);
i=N;
while(i<=N & i>=1)
{
    printf("%d\n",i);
    i=i-2;
}
return 0;



}
//square of first n natural numbers.
#include<stdio.h>
int p8()
{
int i=1,N;

printf("Enter a number:");
scanf("%d",&N);

while(i>=1 & i<=N)
{
    printf("%d\n",i*i);
    i++;

}
return 0;
}

//cubes of n natural numbers
#include<stdio.h>
int p9()
{
int i=1,N;

printf("Enter a number:");
scanf("%d",&N);

while(i>=1 & i<=N)
{
    printf("%d\n",i*i*i);
    i++;

}
return 0;
}

//table of n
#include<stdio.h>
int p10()
{

int i=1,N;
printf("Enter a number:");
scanf("%d",&N);
while(i>=1 & i<=10)
{
printf(" %d\n",N*i);
   i++;
}
return 0;

}
int main()
{
p1();//jisko chlana h wo call kr lo
return 0;

}