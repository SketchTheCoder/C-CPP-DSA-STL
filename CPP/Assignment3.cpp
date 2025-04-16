#include<iostream>
using namespace std;
void p1()
{
    int a,b,c;
    float  avg;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;
    avg=(a+b+c)*1/3;
    cout<<"Avg of "<<a<<" , " << b <<" and "<<c <<" is "<<avg;

}
void p2()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Square of a number is "<<x*x;
}
void p3()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    a+=b;
    b=a-b;
    a=a-b;
    cout<<"After swaping  "<<a <<" and " <<b;

}
void p4()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if(a>b)
    cout<<a <<" is greater.";

    else
    cout<<b <<" is greater.";
}
void p5()
{
    int a[10], sum =0, i;
    cout<<"Enter 10 numbers :";
    for(i=0;i<=9;i++)
    {
        cin>>a[i];

        sum+=a[i];
    }
    cout<<"sum of all numbers in array is "<<sum;
}
int main()
{
    p5();
    return 0;
}