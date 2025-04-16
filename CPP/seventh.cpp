#include<iostream>
using namespace std;
int main()
{

     int unit,bill;
     char user[20];
  
            cout<<"Enter the name of the user:";
            cin>>user;
            cout<<"\n Enter the unit consumed by the user:";
            cin>>unit;  
             
             if(unit<=100)
               bill=unit*1;
            if(100<unit<=300) 
               bill=100+(unit-100)*2;
            else
            {
                bill=100+200*2+(unit-300)*4;
            }
            if(bill<500)
              bill=500;
            if(bill>5000)//adding additional charges
             bill+=bill*0.15;
     cout<<"Name= "<<user<<", unit= "<<unit<<" ,Bill= "<<bill<<endl;

        
        return 0;            
}
