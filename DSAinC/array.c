#include<stdio.h>

int main()
{
int size=10;    
int a[]={1,2,3,4,5,6,7,78,90};
int x=4,y=20,i;
for(i=size;i>=x;i--)
{
a[i-1]=a[i];
}
a[x]==y;

for(i=0;i<size;i++)
printf("%d \n",a[i]);

return 0;   
}