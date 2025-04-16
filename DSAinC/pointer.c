#include<stdio.h>
int main()
{
    int arr[]={12,24,36,48,60};
    int *p =arr;
//Accesing elements of array using pointer
for(int i=0;i<5;i++)
{
printf("Elements %d: %d\n ",i,*(p+i));
}
return 0;
}