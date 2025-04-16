#include<iostream>
#include<string.h>
using namespace std;
class cuboid
{
    private:
    int length, breath, height;
    public:
    cuboid()
    {
        length=0;
        breath=0;
        height=0;
    }
    cuboid(int x, int y, int z){length=x; breath=y; height=z;}
    void show(){cout<<"length= "<<length<<endl<<"breath= "<<breath<<endl<<"height= "<<height;}

};
class customer
{
    private:
    int cust_id;
    char name[10], email[40];
    char mobile[10];

public:
customer()
{
cust_id=0;
strcpy(name,"aaaaaa");
strcpy(email,"exammail.com");
strcpy(mobile,"0000000000");

}
customer(int id,char n[], char e[], char m[])
{
    cust_id=id;
    strcpy(name,n);
    strcpy(email,e);
    strcpy(mobile,m);

}
};
class Time
{
private:
int hr,min,sec;
public:
Time()
{
    hr=0;
    min=0;
    sec=0;

}
Time (int x, int y, int z){hr=x; min=y; sec=z;}
void show(){
    cout<<hr<<":"<<min<<":"<<sec;
}
};
class book
{
private:
int book_id;
char title[10];
float price;
public:
book()
{
    book_id=0;
    strcpy(title,"sketch");
    price=0;

}
book(int b,char t[], float p)
{
    book_id=b;
    strcpy(title,t);
    price=p;
}
};
class complex
{
private:
int a,b;
public:
complex(int x, int y){a=x; b=y;}
void showdata(){cout<<"a= "<<a<<endl<<"b= "<<b;}
};
int main()
{
  complex c[5]={complex(1,2),complex(3,4),complex(5,6),complex(7,8),complex(9,10)};//Creating a complex array and accessing it.
for(int i=0;i<5;i++)
c[i].showdata();

return 0;
}