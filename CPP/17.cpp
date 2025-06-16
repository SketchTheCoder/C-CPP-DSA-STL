#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
complex(int x,int y){a=x; b=y;}//Paramaterized constructor
complex(int z):a(z),b(0){}
complex(){a=0,b=0;};//Default constructor
complex(complex &c){a=c.a;b=c.b;}//Copy constructor
~complex(){cout<<"\nDestructor called for a="<<a<<" b="<<b<<endl;}//Default destructor
void set_a(int x)
{a=x;} 
void set_b(int x)
{b=x;} 
void showdata()
{
cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
};
int main()
{
   // complex c1(3,4);
    // c1.showdata();
    complex *p=new complex;
    p->showdata();
    return 0;

}