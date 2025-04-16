#include<stdio.h>
void p1()
{  
  int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={9,8,7,6,5,4,3,2,1},c[3][3],i,j;
  /*printf("Enter 9 numbers of first matrix:");
  for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)  
          scanf("%d",&a[i][j]);
  printf("Enter elements of second matrix:");
  for(i=0;i<=2;i++)
       for(j=0;j<=2;j++) 
           scanf("%d ",&b[i][j]);*/ 
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        c[i][j]=a[i][j]+b[i][j];
        printf("Sum of Martrices is : \n");
    for(i=0;i<=2;i++)
        {for(j=0;j<=2;j++)
     printf("%d ",c[i][j]);
        printf("\n");
        } 
 } 

void p2()
{  
  int a[3][3],b[3][3],c[3][3],i,j,k,sum;
  printf("Enter 9 numbers of first matrix:");
  for(i=0;i<=2;i++)
       for(j=0;j<=2;j++)
          scanf("%d",&a[i][j]);
                  
  printf("Enter elements of second matrix:");
  for(i=0;i<=2;i++)
       for(j=0;j<=2;j++) 
           scanf("%d ",&b[i][j]); 
        

for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
        for(k=0,sum=0;k<=2;k++)
         sum=sum+a[i][k]*b[k][j];//k act as column and row for a and b matrix while multiplying.
            c[i][j]=sum;
    } 
  printf("product of Martrices is : \n");
        for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
     printf("%d ",c[i][j]);
        printf("\n");
     }
}      
     
void p3()
{
int a[3][3]={1,2,3,4,5,6,7,8,9}, i,j;
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
printf(" %d",a[i][j]);
    }
    printf("\n");
}
printf("Transpose of the matrix is: \n");

for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
printf(" %d",a[j][i]);
    }
    printf("\n");
}
}






int main()
{
    p1();
    return 0;
}
