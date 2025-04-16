#include<stdio.h>
void insertionsort(int a[], int size)
{   
    for(int i=1;i<size;i++)
    {
        int j=i-1,key=a[i];
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("Sorted array:\n\n");
    for(int i=0;i<size;i++)
       printf("%d \n",a[i]);       
}
int main()
{
    int a[]={45,76,89,12,1,3};
    insertionsort(a,6);
    return 0;
}