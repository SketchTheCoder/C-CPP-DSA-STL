#include<stdio.h>
void p1()
{
int a[10],i,t,r;
printf("Enter 10 numbers:");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

for(r=1;r<=9;r++)//Rounds to put bigger number at last.
{
    for(i=0;i<=9-r;i++)//Jo number apni position pe aa gya usko ye chedege nahi.
    {
    if(a[i]>a[i+1])//Swapping code
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }  
    } 
}
for(i=0;i<=9;i++)
 printf(" \n %d",a[i]);
}
void p2()
{
int a[5],i,r,t;
printf("Enter 5 numbers:");
for(i=0;i<=4;i++)
   scanf("%d",&a[i]);

for(r=1;r<=2;r++)//Only two rounda because we need second largest number.
{
    for(i=0;i<=4-r;i++)
{
    if(a[i]>a[i+1])
    {
        t=a[i];
        a[i]=a[i+i];
        a[i+1]=t;
    }
}
}
printf("Second largest number is %d",a[3]);

}
void p3()
{
    int a[5],i,r,t;
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++)
       scanf("%d",&a[i]);

    for(r=1;r<=2;r++)
    {
        for(i=0;i<=4-r;i++)
        {
            if(a[i]<a[i+1])
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }   
printf("second smallest number is %d",a[3]);
}

void p4()
{
int a[10],i,t,r;
printf("Enter 10 numbers:");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(r=1;r<=9;r++)
{
    for(i=0;i<=9-r;i++)
    {
        if(a[i]<a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
}
for(i=0;i<=9;i++)
printf(" \n %d",a[i]);
}
void p5()
{
int a[10],i,b[10];
printf("Enter 10 numbers:");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++)//copying the array a value in b.
    b[i]=a[i];

for(i=0;i<=9;i++)
printf(" \n %d",b[i]);

}
int main()
{
    p5();
    return 0;
}