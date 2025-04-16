#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *p1;
   int n,i,newsize;
   printf("Enter number of elements:");
   scanf("%d",&n);
 // p1=(int *)malloc(n*sizeof(int));
  p1=(int *)calloc(n,sizeof(int));
   if(p1==NULL)
   {
  printf("Memory allocation failed.\n");
    return 1;
   }
   printf("Calloc initalized the array elements to zero :");
  for(i=0;i<n;i++ ) 
  {
printf("%d ",p1[i]);
  }
  printf("\n");
  printf("enter the new size of array:");
  scanf("%d",&newsize);
  p1=(int *)realloc(p1,newsize*sizeof(int));
   if(p1==NULL)
   {
  printf("Memory reallocation failed.\n");
    return 1;
   }
   printf("array elements after realloc :\n");
   for(i=0;i<newsize;i++)
   {
    printf("%d \n",p1[i]);
   }
   printf("\n");

  free(p1);
  printf("Memory freed. \n");

  return 0;

}