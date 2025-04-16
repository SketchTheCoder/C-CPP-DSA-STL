#include<stdio.h>
void p1()//febnocci series the next number is sum of the two previous number ex(0,1,1,2,3,5,8......)
{
int i,a=-1,b=1,c,n;
scanf("%d",&n);

while(n)
{
    c=a+b;
    a=b;
    b=c;
    n--;

printf(" %d ",c);

}   
}

void p2()
{
int a=-1,b=1,c,n;
printf("How many terms to print:");
scanf("%d",&n);
while(n)
{
c=a+b;
printf("%d \n",c);
a=b;
b=c;
n--;

}
}
void p3()
{
int a=-1,b=1,c,n;
printf("Enter a number:");
scanf("%d",&n);
 while((a+b)<n)
 {
c=a+b;
a=b;
b=c;

 }
if(a+b==n)
   printf("%d is in series.",n);
   else
      printf("Not in series.");

}
void p4()//armstrong number.(koi bhi no. me jitne digits h unko number ke power me le jao or add karo number aya then its armstrong number.)
{
int x,digit=0,y,r,p,i,s=0;
printf("Enter a number:");
scanf("%d",&x);
y=x;
while(y)
{
y/=10;
digit++;
}
y=x;
while(y)
{
r=y%10;
y/=10;
//calculate r power digits
for(i=1,p=1;i<=digit;i++)
    p=p*r;
s=s+p;
}

if(s==x)
 printf("It is an armstrong number.");

 else
 printf("it is not an armstrong number.");

}

void p5()
{
int x,y,r,i,s,p,digit;

for(x=1;x<=1000;x++)
{

 digit=0;   
y=x;
while(y)
{
y/=10;
digit++;
}

y=x;
s=0;
while(y)
{
r=y%10;
y/=10;
//calculate r power digits
for(i=1,p=1;i<=digit;i++)
    p=p*r;
s=s+p;
}

if(s==x)
 printf("%d \n",x);


}




}

int main()
{
    p1();
    return 0;
}