#include<iostream>
using namespace std;
/*inline int add(int, int=8);
int add(int a, int b)
{
return a+b;
}*/
inline float area(int);
float area(int r)
{
    return 3.14*r*r;
}
inline float area(int ,float);
float area(int b,float h)
{
return 0.5*b*h;
}
inline float area(float ,int);
float area(float l,int b)
{
return l*b;
}

inline int largest(int, int);
int largest(int a, int b)
{
    if(a>b)
    return 1;

    else
    return 0;
}
inline int largest(float, float);
int largest(float c, float d)
{
    if(c>d)
    return 1;

    else 
    return 0;
}
inline int add(int , int);
int add(int a, int b)
{
    return a+b;
}
inline float add(float,float);
float add(float x,float y)
{
    return x+y;
}
int main()
{
cout<<add(3.4f,5.9f);//We need to wrute f at last of real values if its float type as by default real values are double type...
return 0;
}
