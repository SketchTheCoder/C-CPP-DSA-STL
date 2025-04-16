#include<stdio.h>
void bubblesort(int a[],int size)
{
int n=size,count=0;
while(n-1)
{
    for(int i = 0; i < size - 1; i++)
    {
        if(a[i] > a[i+1])
        {
            int t;
            t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
        }
    }
    count++;
    n--;   
}
printf("Sorted array:\n\n");
for(int i=0;i<size;i++)
{
    printf("%d \n",a[i]); 
}  
printf("No of times loop run=%d\n",count);   
}
void modified_bublesort(int a[], int size)
{
    int n = size,count=0;
    while (n - 1) 
    {
        count++;
        int swapped = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            if (a[i] > a[i + 1]) 
            {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                swapped = 1;
               
            }
        }
        if (!swapped) 
            break;
        n--;
    }
    printf("Sorted array:\n\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d \n", a[i]);
    }
    printf("No of times loop run=%d\n", count);
}
int main()
{
    int a[]={1,2,3,4,6,5};
    bubblesort(a,6);
    printf("\n\n");
    modified_bublesort(a,6);
    return 0;
}