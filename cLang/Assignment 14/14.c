//write a program to calculate factorial of a numner.
#include<stdio.h>
void p1()
{
int i,N,F=1;
printf("Enter a number:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
F*=i;
}
printf("  %d! is %d",N,F);

}
void p2()
{
    int count=0,numb;
    printf("Enter a number:");
    scanf("%d",&numb);
    while(numb)
    {
     numb=numb/10;
    count++;
    }
          printf("Total digits are %d",count) ;                                                                                          
}

void p3()
{
int i,n;
printf("Enter a number:");
scanf("%d",&n);


for(i=2;i<n;i++)
{
if(n%i==0)
   break; 
}
if(i==n){
printf("%d is  prime number ",n);
}
else{
    printf("%d is not a prime numebr");
}

}
void p4()
{          
    int a,b,l;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)        
    if(l%a==0 && l%b==0)
    {
        printf("LCM is %d",l);
        break;
    }                                                                                                

}
void p5()

{
int n,r,y=0;
printf("Enter a number:");
scanf("%d",&n);
while(n)
{
r=n%10;
n=n/10;
y=y*10+r;
}
printf("Reverse of the number is %d",y);


}
int main()
{
    p5();
    return 0;
}