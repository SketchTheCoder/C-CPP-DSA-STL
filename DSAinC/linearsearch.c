//Program to implement linear search
#include<stdio.h>
int search(int arr[], int size,int key)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
        printf("Element %d is at index %d\n",arr[i],i);
        break;
        }
    }
    if(i==size)
       printf("Not found");
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    search(arr,10,5);
    return 0;
}