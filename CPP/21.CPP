#include<iostream>
using namespace std;
int area(int a)
{
    cout<<"Area of square is:"<<endl;
    return a*a;//Area of square...
}
double area(double r)
{
    cout<<"Area of circle is:"<<endl;
    return 3.14*r*r;//Area of circle....
}
int area(int l,int b)
{
    cout<<"Area of the rectangle is:"<<endl;
    return l*b;
}
int main()
{
    cout<<area(2.3);//Circle
    cout<<endl;
    cout<<area(4);//Square
    cout<<endl;
    cout<<area(8,7);//Rectangle
    return 0;
}
