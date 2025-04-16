#include<iostream>
using namespace std;
int a=40,b=60;//Global variables
int main()
{
  int a=12,b=34;//Local variables
  cout<<"Sum of Local variables :"<<endl<<a+b<<endl;
  cout<<"Sum of Global variables:"<<endl<<::a+::b<<endl;
return 0;
}
