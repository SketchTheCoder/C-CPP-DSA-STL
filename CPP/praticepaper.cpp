#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10},index,element=7,size=10,i;
    for(i=0;i<size;i++)
    if(a[i]==element)
      break;
    index=i;
    for(i=index;i<size;i++)
        a[i]=a[i+1];  
    
    for(i=0;i<size-1;i++)
     cout<<a[i]<<endl;    

     return 0;
}