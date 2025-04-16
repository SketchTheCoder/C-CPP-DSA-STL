//print the following patterns.
#include<stdio.h>
void p1()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
    if(j<=i)
        printf("*");
    else
        printf(" ");
}
printf("\n");
}
}

void p2()
{
    int i,j;
for(i=1;i<=5;i++)
{
   for(j=1;j<=5;j++)
  {
   if(j+i>=6)
       printf("*");
     
  else
     printf(" ");
}

printf("\n");
}
}
void p3()

  {
    int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j+i<=6)
  {printf("*");
  }
  else
  printf(" ");
  
}
printf("\n");
}
} 
                                                                                                                                                                                                                    
void p4()
{

int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j>=i)
  {printf("*");
  }
  else
  printf(" ");
  
}
printf("\n");
}

}

void p5()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)

    if(j<=i)
        printf("%d",j);
    else
        printf(" ");

printf("\n");
}
}

void p6()
{
int i,j,k;
for(i=1;i<=4;i++)
{
k=i;

for(j=1;j<=4;j++)
if(j<=i)
printf("%d",k--);
else
printf(" ");


printf("\n");
}

}

void p7()
{
int i,j;
char ch;
for(i=1;i<=5;i++)
{
  ch ='A';
for(j=1;j<=5;j++)
{
if(j>=i)
  {printf("%c",ch++);
  }
  else
  printf(" ");
  
}
printf("\n");
}

}

void p8()

{
int i,j,k=1;

for(i=1;i<=4;i++)

{
  
for(j=1;j<=4;j++)
{
    if(j<=i)
        printf("%d",k++);
    else
        printf(" ");
}
printf("\n");
}
}

void p9()

{
int i,j;
char ch;
for(i=1;i<=5;i++)
{
  ch ='A'+i-1;
for(j=1;j<=5;j++)
{
if(j>=i)
  {printf("%c",ch++);
  }
  else
  printf(" ");
  
}
printf("\n");
}

}

void p10()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
{
  if(i==1 || i==5 || j==1 || j==5)
  printf("* ");
  else
  printf("  ");

}
printf("\n");
}
}
int main()
{
    p10();
    return 0;
}


