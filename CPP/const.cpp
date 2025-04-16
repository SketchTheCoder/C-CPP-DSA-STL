#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
complex(int x,int y){a=x; b=y;}
complex(int z){a=z;}
complex();
complex(complex &c){a=c.a;b=c.b;}

void set_a(int x)
{a=x;} 
void set_b(int x)
{b=x;} 
void showdata()
{
cout<<"a="<<a<<endl<<"b="<<b;
}
};
int main()
{
    complex c1(3,4),c2(c1);
    c2.showdata();
    return 0;

}