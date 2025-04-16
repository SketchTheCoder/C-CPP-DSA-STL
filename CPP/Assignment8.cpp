#include<iostream>
using namespace std;
class complex//a+bi, where a is real part and b is imaginary part....
{
private:
int a,b;

public:
void set_a_and_b(int m, int n){a=m; b=n;}
void show_a_b()
{
    cout<<"\na= "<<a<<"\nb= "<<b;
}

};
class Time
{
private:
int H,M,S;

public:
void set_H_M_S(int x, int y, int z)
{
    H=x;
    M=y;
    S=z;
}
void show_time()
{
    cout<<H<<" hr "<<M<<" min "<<S<<" sec "<<endl;
}
};
/*class Date
{
private:
int d,m,yr;

public:
void set_d_m_yr(int x, int y , int z)
{
    d=x;
    m=y;
    yr=z;
}
char* getmonthname()
{
    switch(m)
    {
              case 1:
                return "jan";
                 case 2:
                    return "Feb";
                case 3:
                    return "Mar";
                case 4:
                    return "Apr";
                case 5:
                    return "May";
                case 6:
                    return "Jun";
                case 7:
                    return "Jul";
                case 8:
                    return "Aug";
                case 9:
                    return "Sep";
                case 10:
                    return "Oct";
                case 11:
                    return "Nov";
                case 12:
                    return "Dec";
    }
}
void show_date()
{
    cout<<" d= "<<d<<", m= "<<m<<", y= "<<yr<<endl;
}
void show_date_new()
{
    cout<<d<<"- "<<m<<"- "<<yr;
}
void show_date_third()
{
    cout<<d<<"- "<<getmonthname()<<"- "<<yr;
}
};*/
class circle
{
private:
int radius;

public:
void set_radius(int x){radius=x;}
int getradius(){return radius;}
float getcircum(){return 2*3.14*radius;}
float getarea(){return 3.14*radius*radius;}

};

int main()
{
    circle c1;
    c1.set_radius(5);
    cout<<c1.getradius()<<endl;
    cout<<c1.getcircum()<<endl;
    cout<<c1.getarea()<<endl;
}
