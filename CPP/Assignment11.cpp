#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
int id;
char name[10];

public:
student()
{
  id=0;
    strcpy(name,"aaaa");
}
student(int x,char nme[10])
{ 
id=x;
strcpy(name,nme);
}
void get_id(){cout<<id<<endl;}
void get_name(){cout<<name<<endl;}

};

class Date
{
  private:
  int d,y;
  char m[5];
  public:
  Date():d(4),m("king"),y(2007)
  {}
void showd(){cout<<d<<endl;}
void showm(){cout<<m<<endl;}
void showy(){cout<<y<<endl;}

};
class Room
{
int room_number,price;
bool is_ac;

public:
Room(): room_number(34),is_ac()
{}
void show_room(){cout<<room_number<<endl;}
void show_ac(){cout<<is_ac;}
};
class Circle
{
  private:
  int radius;
  public:
  Circle(){radius=0;}

Circle(int x){radius=x;}
void show_radius(){cout<<radius;}
};
int main()
{
Circle c1,c2(5);
c1.show_radius();
cout<<endl;
c2.show_radius();

return 0;
}
