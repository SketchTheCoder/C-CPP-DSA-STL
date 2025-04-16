#include<iostream>
using namespace std;
int main()
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
    return 0;
    }