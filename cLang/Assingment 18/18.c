#include<stdio.h>
void p1()
{
int i,j;
for(i=1;i<=4;i++)
{
    for(j=1;j<=7;j++)
{if(j>=5-i && j<=3+i)
printf("* ");

else
printf("  ");
}
printf("\n");
}
}
void p2()
{

int i,j;
for(i=1;i<=4;i++)
{
    for(j=1;j<=7;j++)
      {
        if(j>=i && j<=8-i)
      printf("* ");
      else
      printf("  ");
      }
      printf("\n");
}

}
void p3()
{
int i,j,status;

for(i=1;i<=4;i++)
{
  status =1;
    for(j=1;j<=7;j++)
    {
    
    if(j>=5-i && j<=3+i)
    {
        if(status)
          printf("*");
        else
        printf(" ");  

     status=1-status;

    }
    else
    printf(" ");
    }
printf("\n");
}
}
void p4()
{
 int i,j,k; 
for(i=1;i<=4;i++)
{
  k=1;
for(j=1;j<=7;j++)
{

  if(j>=5-i && j<=3+i)
  {
  printf("%d ",k);
  j<4?k++:k--;
  }
  else
  printf("  ");
}
printf("\n");
}
}
void p5()
{
int i,j;
char k;
for(i=1;i<=4;i++)
{
  k='A';
    for(j=1;j<=7;j++)
      {
        if(j>=i && j<=8-i)
      printf("%c ",k++);
      else
      printf("  ");
      }
      printf("\n");
}
}
void p6()
{
  int i,j;
  char k;
for(i=1;i<=4;i++)
{
  k='A';
    for(j=1;j<=7;j++)
      {
        if(j>=i && j<=8-i)
        {
      printf("%c ",k);
      j<4?k++:k--;
        }
      else
      printf("  ");
      }
      printf("\n");
}
}
void p7()
{
int i,j,status,k;

for(i=1;i<=5;i++)
{
  status =1;
  k=1;
    for(j=1;j<=9;j++)
    {
    
    if(j>=6-i && j<=4+i)
    {
        if(status)
          {printf("%d ",k);
          
          j<5?k++:k--;
          }
        else
        printf("  ");  

     status=1-status;

    }
    else
    printf("  ");
    }
printf("\n");
}
}
void p8()
{
int i,j;    
for(i=1;i<=4;i++)
{
for(j=1;j<=7;j++)
if(j<=5-i || j>=3+i)
printf("* ");

else
printf("  ");

printf("\n");
}
}
void p9()
{
int i,j,k;    
for(i=1;i<=4;i++)
{
  k=1;
for(j=1;j<=7;j++)
if(j<=5-i || j>=3+i)
{
printf("%d ",k);
j<4?k++:k--;
}
else
{
  printf("  ");
if(j==4)
    k--;
}
printf("\n");
}

}
void p10()
{
int i,j,k;    
for(i=1;i<=4;i++)
{
  k='A';
for(j=1;j<=7;j++)
if(j<=5-i || j>=3+i)
{
printf("%c ",k);
j<4?k++:k--;
}
else
{
  printf("  ");
if(j==4)
    k--;
}
printf("\n");
}

}


int main()
{
    p3();
    return 0;
}