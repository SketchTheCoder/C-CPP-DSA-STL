#include<iostream>
#include<string.h>
using namespace std;
class person
{
private:
char name[15];
int age;
protected:
void set_name(char n[15])
{
    strcpy(name,n);
}
void set_age(int n)
{
    age=n;
}
char* show_name()
{
    return name;
}
int show_age()
{
    return age;
}
};
class Employee: public person

{
private:
int salary;
public:
void set_employ(int s,int a, char n[])
{
    salary=s;
    set_name(n);
    set_age(a);
    
}
void show_employee()
{
    cout<<endl;
    cout<<show_name()<<" "<<show_age()<<" "<<salary;
}


};
class circle
{
private:
int radius;
public:
void set_radius(int r){radius=r;}
int get_radius(){return radius;}
float get_area(){return 3.14*radius*radius;}
};
class Thickcircle:public circle
{
private:
int thickness;
public:
void set_thickness(int t){thickness=t;}
int get_thickness(){return thickness;}
float get_area(){return 3.14*(get_radius()+thickness)*(get_radius()+thickness)-3.14*get_radius()*get_radius();}
};
class A
{
private:
int a;
public:
void set_a(int x){a=x;}
int get_a(){return a;}
};
class B:public A
{

};
int main()
{
    Thickcircle c1;
    c1.set_radius(4);
    c1.set_thickness(5);
    //cout<<c1.get_area();
B b1,b2;
b1.set_a(5);
cout<<b1.get_a();

    return 0;
}




