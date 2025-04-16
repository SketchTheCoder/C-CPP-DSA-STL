#include<stdio.h>
void swap_array_elements(int a[],int index1, int index2)
{
    int i, t;
    t=a[index1];
    a[index1]=a[index2];
    a[index2]=t;
     
    for(i=0;i<=5;i++)
     printf(" \n %d",a[i]);    
}
int sort_array(int a[], int size)//arranging them in asscending order
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
int count_duplicate(int a[],int size)
{
    int i,j,count=0;
    sort_array(a,size);
    for(i=0;i<size-1;)
    {
        j=i+1;
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);
        }
        i=j;
    }
    return count;
}
void print_unique(int a[], int size)
{
      int i,j,count=0;
    sort_array(a,size);
    for(i=0;i<size-1;)
    {
       printf(" \n %d",a[i]);
        j=i+1;
        if(a[i]==a[j])
        {
         
            count++;
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);
        }
        i=j;
    }
 if(a[size-1]!=a[size-2])
 printf(" \n %d",a[size-1]);
}
void merge(int a[], int b[],int size, int c[])
{
  int i,j,k;
for(i=0,j=0,k=0;i<size&&j<size;k++)
{
  if(a[i]>b[j])
  {
    c[k]=a[i];
    i++;
  }
  else
  {
    c[k]=b[j];
    j++;
  }
}
while(i<size)
{
  c[k]=a[i];
  i++;
  k++;
}
while(j<size)
{
  c[k]=b[j];
  j++;
  k++;
}

}
void print_frequency(int a[], int size)
{
  int i,j,count=0;
  sort_array(a,size);
      for(i=0;i<size-1;)
    {
        
        printf("%d ",a[i]);
        j=i+1;
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);
        }
        printf(" - %d\n",j-i);
        i=j;
    }
    if(a[size-1]!=a[size-2])
        printf("%d - %d",a[size-1],1);

}
     


int main()
{
    int a[]={10,20,10,30,20,40,50,50};
   print_frequency(a,7);
    return 0;
}
