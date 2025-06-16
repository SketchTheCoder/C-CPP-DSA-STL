#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"Enter value of a:"<<endl;
cin>>a; 
cout<<"Enter value of b:"<<endl;
cin>>b;        
   try{
    if(b==0)
       throw("Can't divide by zero");
    cout<<"Output : "<<a/b<<endl;
   }
   catch(const char* msg)
   {
    cout<<"Exception Caught: "<<msg<<endl;
   }
return 0;
}