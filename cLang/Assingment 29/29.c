#include<stdio.h>
void sum()
{
int a[10],s=0,i;
 printf("Enter 10 numbers:"); 
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
printf("sum of 10 numbers is %d",s);

}

void avg()
{
    int b[10],i=0,s=0;
    float avg;
printf("Enter 10 numbers:");
for(i=0;i<=9;i++)
{
    scanf("%d",&b[i]);
   s=s+b[i];
}
printf("Avg of 10 numbers is %.2f",s/10.0);//.2 is used to get two dogits after the decimal.

}
void sum_of_odd_even ()
{
    int a[10],i,se=0,so=0;
printf("Enter the 10 numbers:");
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
    if(a[i]%2==0)
  se=se+a[i];
    
     else
    {
   so = so+a[i];
    }
}
printf("sum of all even number is %d \n",se);
printf("sum of all odd number is %d \n",so);

}
void greatest_number()
{
int a[10],i,greatest;
printf("Enter 10 numbers:");
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}
greatest=a[0];//assume that a[0] is greatest.
for(i=0;i<=9;i++) 
{
    if(a[i]>greatest)
    greatest=a[i];
}
printf("greates number is %d",greatest);

}
void smallest_no()
{
    int a[10],i,smallest;
    printf("Enter 10 number:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
     smallest=a[0];
     for(i=0;i<=9;i++)
     {
        if(a[i]<smallest)
        smallest=a[i];
     }
printf("Smallest number is %d",smallest);

}
int main()
{
    sum();
    return 0;
}