#include<iostream>
using namespace std;
class complex 
{
private:
int a,b;//a is real and b is imaginary part....
public:
void input(int,int);
void display();
complex add(complex);
friend complex subtract(complex,complex);
};
void complex::input(int m,int n)
{
    a=m;
    b=n;
}
void complex::display()
{
    cout<<"Complex number = ";
    cout<<a<<" + i"<<b<<endl;//a+ib
}
complex complex ::add(complex c)
{
    complex temp;
    temp.a=a+c.a;//caller objects variable can be accessed directly
    temp.b=b+c.b;
    return temp;
}
complex subtract(complex o1,complex o2)
{
    complex temp;
    temp.a= o1.a-o2.a;
    temp.b= o1.b-o2.b;
    return temp;
}
int main()
{
    complex c1,c2,c3,c4;
    c1.input(3,4);
    c2.input(8,8);
    c3=c1.add(c2);
    c3.display();
    c4=subtract(c2,c1);//friend function is called without any . operator
    c4.display();
    return 0;
}

