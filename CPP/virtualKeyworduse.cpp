//Hybrid inheritance program and use of virtual keyword....
#include<iostream>
using namespace std;
/*as both test and sports class inherit the student class and result class inherit the 
both class so if we call a function from class student then it show error as it gets inherited in both class so we use 
virtual keyword*/
class student
{
protected:
int roll_number;
public:
void get_numb(int a)
{
    roll_number=a;
}
void put_numb()
{
    cout<<"Roll no="<<roll_number<<endl;
}
};
class test:public virtual student{
    protected:
    double s1,s2;
    public:
    void get_marks(double x,double y)
    {
       s1=x;
       s2=y;
    }
   void put_marks()
   {
    cout<<"Marks in sub1="<<s1<<endl;
    cout<<"Marks in sub2="<<s2<<endl;
   }
};
class sports:public virtual student
{
public:
double score;
void get_score(double y)
{
score=y;
}
void put_score()
{
    cout<<"Marks in sports= "<<score<<endl;
}
};
class result:public test,public sports
{
protected:
double total;
public:
void display()
{
    total=s1+s2+score;
    put_marks();
    put_numb();
    put_score();
    cout<<"Total= "<<total<<endl;
}
};
int main()
{
    result stu1;
    stu1.get_numb(123);
    stu1.get_marks(24.3,56.8);
    stu1.get_score(67.0);
    stu1.display();
    return 0;
}
