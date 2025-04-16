#include<iostream>
using namespace std;
void p1()
{
    cout<<"Hello MysirG";
    
}
void p2()
{
    cout<<"hello"<<endl<<"MySirG";
}
void p3()
{
    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    cout<<"Sum of "<<x <<" and " <<y <<" is "<<x+y;
}    
void p4()
{
int r;
float a;
cout<<"Enter the value of radius:";
cin>>r;
a=3.14*r*r;
cout<<"Area of circle is "<<a;
}
void p5()
{
    int l,b,h,volume;
    cout<<"Enter the value of length, breadth and height:";
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"volume of cuboid is "<<volume;
}

int main()
{
    p5();
    return 0;
}