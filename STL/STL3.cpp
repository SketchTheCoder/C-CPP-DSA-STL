#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

    /*
    array<int,5> a1={1,2,3,4,5};
    array<int,5>::iterator it;
    it=a1.begin();
    for(it=a1.begin();it!=a1.end();it++)
    cout<<*it<<" ";
    */
   /*
   array<float,5> a2={1.2,3.4,5.6,7.8,9.6};
   int size=a2.size();
   float sum;
   for(float x:a2)
   sum+=x;
   cout<<"Average :"<<sum/size<<endl;
   */
  /*
  array<int,10> a3;
  cout<<"Enter elements of array: "<<endl;
  for(int i=0;i<a3.size();i++)
  cin>>a3[i];
int largest=a3[0];
for(int i=1;i<a3.size();i++)
{
    if(a3[i]>largest)
    largest=a3[i];
}
cout<<"Largest :"<<largest<<endl;
*/
/*
class complex{
private:
int a,b;
public:
complex(int x,int y):a(x),b(y){}
void display()
{
    cout<<a<<" +"<<b<<"i"<<endl;
}
complex operator+(complex c)
{
    complex t(0,0);
    t.a=a+c.a;
    t.b=b+c.b;
    return t;
}
};

void p4()
    {

        complex addcomplex(array<complex,5>);
        array <complex,5> a1={
            complex(3,5),
            complex(6,8),
            complex(1,2),
            complex(5,0),
            complex(1,1)
        };
        complex c=addcomplex(a1);
        c.display();
        cout<<endl; 
    }
    complex add_const(array<complex,5> a1)
    {
        complex c(0,0);
        for(auto x:a1)
        c=c+x;
        return c;
    }
        */
    void sort()
    {
        array<int,10> a1={1,34,2,67,4,78,0,9,5,3};
        std::sort(a1.begin(),a1.end());
        for(auto x:a1)
        cout<<x<<" ";
        cout<<endl;
    }
    int main()
    {
        sort();
        return 0;
    }



