#include<iostream>
using namespace std;
inline int sort(int,int,int);
int sort(int array[], int size, int x)
{
    int i,r,k;


     if(x==1)
    {
     for(r=1;r<size;r++)
     {
        for(i=0;i<size-r;i++)
        {
            if(array[i]>array[i+1])
            {
             k=array[i];
             array[i]=array[i+i];
             array[i+i]=k;
            } 
            }
            }
            
            return array[i];
        }
        else if(x==0)
            {
            for(r=1;r<size;r++)
            {
             for(i=0;i<size-r;i++)
                {

            if(array[i]<array[i+1])
            {
             k=array[i];
             array[i]=array[i+i];
             array[i+i]=k;
            }
                }
          }
            }
            return array[i];
      }
inline int Lcm(int, int, int);
int Lcm(int a,int b, int c)
{
    int L;
  for(L=a>b && a>c ?a:b ; L<=a*b*c;L++)
  {
    
  }

}





int main()
{
  int array[]={2,7,9,4,5,6};
  sort(array,6,1);
      return 0;
}      