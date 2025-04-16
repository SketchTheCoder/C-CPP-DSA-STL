#include<iostream>
using namespace std;
inline int HCF(int , int);
int HCF(int a, int b)
{
  int H;
  for(H=a<b?a:b;H>=1;H--)
  {
    if(a%H==0 && b%H==0)
     return H;
    break;
  }
}

inline int volume(int,int,int);
int volume(int l,int b,int h)
{
return l*b*h;
}

inline float volume(float,int);
float volume(float r, int h)
{
return 0.3*3.14*r*r*h;    
}
inline float volume(float,float);
float volume(float r, float h)
{
return 1.3*3.14*r*r*h;
}

inline int swap(int, int, int  );
int swap(int a[], int b[], int size)
{
  
  int k[size],i;
  for(i=0;i<size;i++)
  {
    k[i]=a[i];
    a[i]=b[i];
    b[i]=k[i];
  }

cout<<"After swapping :"<<endl;
for(i=0;i<size;i++)
{
    cout<< a[i];
}

cout<< endl;

for(i=0;i<size;i++)
{
    cout<< b[i];
}
}
