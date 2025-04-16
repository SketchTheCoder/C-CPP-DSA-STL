#include<stdio.h>
void p1()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    printf("It is even.");

    else
    printf("It is odd.");
}
void p2()
{
    int i,n,p=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p*=i;
    }
printf("Factoiral of %d is %d",n,p);
}
void p3()
{
    int a,b,c;
    printf("Enter the value of a and b :");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
printf("After swaping a is %d and b is %d",a,b);
}
void p4()
{
    int l,i,a,b;
    printf("Enter the value of a and b :");
    scanf("%d %d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
    {
        if(l%a==0 && l%b==0)
        {
        printf("Lcm is %d ",l);
        break;
        }
    }
}
void p5()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            break;
        }
        
    }
    if(i==n)
    printf("It is a prime number.");
    else
    printf("It is not a prime number.");
}
int main()
{
    p5();
    return 0;
}