//write a program to find the greatest number among the three numbers.print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);

if(a>b&a>c)
{
printf("%d is the biggest number",a);

}
else if(b>a&b>c)
{
    printf("%d is the biggest number",b);
}
else if(c>a&c>b)
{
    printf("%d is the biggest number",c);
}
else if(a==b|c==a)
{
printf("%d is the biggest number",a);
}
else if(c==b)
{
printf("%d is the biggest number",b);
}
else{
    printf("%d is the biggest number",a);
}
return 0;

}