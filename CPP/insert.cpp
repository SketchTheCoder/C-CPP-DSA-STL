#include<iostream>
using namespace std;
class Base{
public:
virtual void display()
{
    cout<<"This is base class"<<endl;
}
};
class Child:public Base{
  public:
void display()
{
   cout<<"This is child class"<<endl; 
}
};
int main()
{
    Base *b;
    Child c;
    b=&c;
    b->display();//This is child class
return 0;
}