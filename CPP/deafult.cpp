#include<iostream>
using namespace std;
namespace abc{
int add(int a,int b){
    return a+b;
}
int product(int a, int b){
    return a*b;
}
int square(int x){
    return x*x;
}
};
void simple_interest(int principal_amount, int time, int rate_of_interest=10)
{
cout<<(principal_amount*time*rate_of_interest)/100;
}
int main()
{
  cout<<"Using default argument:"<<endl;
   simple_interest(10000,18);//Call using default argument
  cout<<endl;
 cout<<"Without default argument:"<<endl;//Call using without default argument
  simple_interest(50000,12,25);
  cout<<endl;
cout<<abc::add(5,6);
cout<<endl;
cout<<abc::product(3,6);
cout<<endl;
cout<<abc::square(7);
    return 0;
}