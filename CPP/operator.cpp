#include<iostream>
using namespace std;
class complex 
{
    private:
    int a,b;
    
    public:
    void set_a_b(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_a_b()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
 //friend function kahi bhi likho public or private it can be access from anywhere.
 friend complex operator+(complex , complex); 
 friend complex operator-(complex , complex);
 friend complex operator*(complex , complex);


};
 complex operator+(complex X, complex Y)
    {
        complex temp;
        temp.a=X.a+Y.a;
        temp.b=X.b+Y.b;
        return temp;
    }
 complex operator-(complex X, complex Y)
 {
    complex temp;
    temp.a=X.a-Y.a;
    temp.b=X.b-Y.b;
    return temp;
 }
 complex operator*(complex X, complex Y)
 {
    complex temp;
    temp.a=X.a*Y.a;
    temp.b=X.b*Y.b;
    return temp;
 }
int main()
{
    complex c1,c2,c3;
    c1.set_a_b(4,5);
    c2.set_a_b(8,9);
    c3=c1*c2;
   
    c3.show_a_b();
    return 0;
}