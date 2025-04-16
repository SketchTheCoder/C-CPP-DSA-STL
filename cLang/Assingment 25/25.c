#include<stdio.h>
void printN(int n)
{
if(n>0)
   printN(n-1);
   printf(" \n %d",n);
}
void print_reverseN(int n)
{
   if(n>0)
   {
   printf(" \n %d",n);
   print_reverseN(n-1);
   }
   }

void printNodd(int n)
{
   if(n>0)
   {printNodd(n-1);
   printf(" \n %d",2*n-1);
   }
}
void printNoddreverse(int n)
{
   if(n>0)
   {
      printf("\n %d",2*n-1);
      printNoddreverse(n-1);
   }
}
void printNeven(int n)
{
   if(n>0)
   { 
      printNeven(n-1);
      printf(" \n %d",2*n);
   }
}
int main()
{
printNeven(10);
return 0;
}