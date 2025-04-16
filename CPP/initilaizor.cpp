#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
complex():a(0),b(0){}
 complex(int x,int y): a(x),b(y){}

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
    complex c1,c2(4,7);
    c1.showdata();
    c2.showdata();
    return 0;

}