#include<stdio.h>
int greatest_number(int a[], int size )
{
  int i,greatest;
  greatest=a[0];
  for(i=0;i<=size-1;i++)
  {
    if(a[i]>greatest)
       greatest=a[i];
  }
  return greatest;
}

int smallest_number(int a[], int size)
{
  int i, smallest;
  smallest =a[0];
  for(i=0;i<=size-1;i++)
  {
    if(a[i]<smallest)
    smallest=a[i];
  }
  return smallest;
}
int sort_array(int a[], int size)//This is known as bubble sort.
{
  int i,r,t;
for(r=1;r<=size-1;r++)
{
  for(i=0;i<=size-1-r;i++)
  {
    if(a[i]>a[i+1])
    {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
  }
}
}
 
void rotate(int a[], int size, int n, int d) 
{
  int i,t;


if(d==1)
{
t=a[size-1];//store last digit of an array in t.

while(n)
{
for(i=size-2;i>=0;i--)//It shifts digit by one value tp right.
  a[i+1]=a[i];

  a[0]=t;
n--;
}
}
else if(d==-1)
{
  while(n)
{
  t=a[0];//storing fist value
for(i=1;i<=size-1;i++)//shifts value by one digit left.
  a[i-1]=a[i];

  a[size -1]=t;
    n--;
}
}
}
int adajacent(int a[],int size)
{
  int i;
  for(i=0;i<=size-2;i++)
    { if(a[i]==a[i+1])
     return a[i];
    }
}
int main()//This is how an array is called.
{
int a[]={1,2,3,4,4};
printf("%d",adajacent(a,5));
return 0;

}