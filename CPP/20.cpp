#include<iostream>
using namespace std;
class complex 
{
int real,img;
public:
complex(int a,int b){real=a,img=b;}
complex(){real=0,img=0;}
complex operator+(complex q)
{
    complex t;
    t.real=real+q.real;
    t.img=img+q.img;
    return t;
}
complex operator-(complex q)
{
    complex t;
    t.real=real-q.real;
    t.img=img-q.img;
    return t;
}
complex operator*(complex q)
{
    complex t;
    t.real=real*q.real-img*q.img;
    t.img=real*q.img+img*q.real;
    return t;
}
complex operator/(complex q)
{
        double denominator = q.real * q.real + q.img * q.img;
        return complex((real * q.real + img * q.img) / denominator, 
                       (img * q.real - real * q.img) / denominator);
}
void display()
{
    cout<<real<<" + "<<img<<"i"<<endl;
}
};
int main()
{
    complex c1,c2(3,4),c3(2,1);
    cout<<"First complex number "<<endl;
    c2.display();
    cout<<"First complex number "<<endl;
    c3.display();
    cout<<endl;
    int choice,k;
    do{
  cout<<"Enter 1 for add operation:"<<endl;
  cout<<"Enter 2 for subtract operation:"<<endl;
  cout<<"Enter 3 for Multiply operation:"<<endl;
  cout<<"Enter 4 for Divide operation:"<<endl;
  cout<<"Enter your choice:"<<endl;
  cin>>choice;
    switch(choice)
    {
        case 1:
        c1=c2+c3;
        c1.display();
        break;
        case 2:
        c1=c2-c3;
        c1.display();
        break;
        case 3:
        c1=c2*c3;
        c1.display();
        break;
        case 4:
        c1=c2/c3;
        c1.display();
        break;
        default:
        cout<<"Invalid Choice:"<<endl;
    }
    cout<<"Press 1 to continue or any other number to stop:";
        cin>>k;
}
while(k==1);
    return 0;
}