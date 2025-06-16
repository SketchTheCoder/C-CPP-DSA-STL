#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5]={1,2,3,4,5};//SMA
    int *ptr=(int*)malloc(5*sizeof(int));//DMA
    printf("Enter values of array:\n");
    for(int i=0;i<5;i++)
    scanf("%d",&ptr[i]);
    printf("Array: \n");
     for(int i=0;i<5;i++)
    printf("%d  ",ptr[i]);
    printf("\n");
    ptr=(int*)realloc(ptr,10*sizeof(int));//Resizeing the array
    printf("Enter the values array after size updated :\n");
     for(int i=0;i<10;i++)
    scanf("%d",&ptr[i]);
       printf("Updated Array: \n");
     for(int i=0;i<10;i++)
    printf("%d  ",ptr[i]);
    printf("\nCalloc function call:\n");
    int *p=(int*)calloc(5,sizeof(int));//Initialize all bits to zero 
    for(int i=0;i<5;i++)
    printf("%d  ",p[i]);
    return 0;
}