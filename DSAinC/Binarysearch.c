//Program to implement binary search(It is implemented only on sorted list)
#include<stdio.h>
int binarysearch(int a[],int size,int target)
{
int j;
j=size/2;
if(target>=a[j])
{
int i;
for(i=j;i<size;i++)
{
    if(a[i]==target)
    {
    printf("Element %d is at index %d",target,i);
    break;    
}
}
if(i==size)
printf("Not found");
}
else
{
    int i;
    for(i=0;i<size/2;i++)
    {
        if(a[i]==target)
        {
        printf("Element %d is at index %d",target,i);
        break;       
    }
}
if(i==(size)/2)
   printf("Not found");
}
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    binarysearch(a,10,6);
    return 0;
}