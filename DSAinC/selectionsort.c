#include<stdio.h>
void selectionsort(int a[],int size)
{
    int miniumindex,i,j,temp;
    for(i=0;i<size-1;i++)
    {
       miniumindex=i;
       for(j=i+1;j<size;j++) 
       {
        if(a[j]<a[miniumindex])
         miniumindex=j;
       }
       temp = a[miniumindex];
       a[miniumindex] = a[i];
       a[i] = temp;
    }
}
void array(int a[],int size)
{
    for(int i=0;i<size;i++)
       printf("%d \n",a[i]);
}
int main()
{
    int a[]={1,34,56,7,8,9,12};
    printf("Before sorting:\n");
    array(a,7);
    selectionsort(a,7);
    printf("After sorting:\n");
    array(a,7);
    return 0;
}