#include<iostream>
using namespace std;
class complex{
private:                                           
int real,imaginary;
public:
complex(){real=0,imaginary=0;}//default constructor....
complex(int x){real=x,imaginary=x;}//paramaterised constructor...
complex(int x, int y){real=x,imaginary=y;}//paramaterised constructor...
complex(complex &c){real=c.real,imaginary=c.imaginary;}//copy constuctor....
complex add(complex c1,complex c2){real=c1.real+c2.real,imaginary=c1.imaginary+c2.imaginary;}
void show(){cout<<real<<"+ i"<<imaginary<<endl;}
  };

class Time{
    private:
    int hr,min,sec;
    public:
    void setTime(int x, int y, int z)
    {
     hr=x;
     min =y;
     sec=z;
    }
    void showtime()
    {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec";
    }
    void normalize()
    {
        min=sec/60+min; 
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
        
    }
};
class circle
{
private:
int radius;
public:
void setradius(int x)
{
    radius=x;
}
void getradius(){cout<<"Radius= "<<radius<<endl;}
void area()
{
    cout<<"Area= "<<3.14*radius*radius<<endl;
}
void circumference()
{
    cout<<"Circumference= "<<2*3.14*radius;
}
};
int main()
{
  complex c1(1),c2(3,6),c3;
  complex c5=(2,7);

 c3.add(c1,c2);

c3.show();
    return 0;
}



