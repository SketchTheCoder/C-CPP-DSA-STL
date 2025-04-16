#include<iostream>
using namespace std;
int main()
{int order,i,j;
    cout<<"Enter the order of matrix:";
    cin>>order;
   int  matrix[order][order];
    cout<<"Enter the element of matrix:";
   for(i=0;i<order;i++)
       {for(j=0;j<order;j++)
        {   cin>>matrix[i][j];
        }
       }
       for(i=0;i<order;i++)
       {   for(j=0;j<order;j++)
        {
            if(i==j)
              matrix[i][j]=0;
        }
       }
       cout<<"Final matrix: \n";
       for(i=0;i<order;i++)
       {
        for(j=0;j<order;j++)
        {
            cout<< matrix[i][j]<<" ";
        }
        cout<<"\n";
       }   return 0;
}
