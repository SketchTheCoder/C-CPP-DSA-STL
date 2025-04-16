#include<iostream>
#include<string.h>
using namespace std;

void f1()
{
    
    int age,vote;
    char nationality[50];
    try{
    cout<<"Enter your age:";
    cin>>age;
      if(age<18)
    throw 1;

    cout<<"Enter your nationality:";
    cin.ignore();//used to empty buffer
    cin.getline(nationality,50);//used to get string
    if(strcmp(nationality,"INDIAN"))//If same so return 1
    throw nationality;
    cout<<"\n1.Akshy";
    cout<<"\n2.Vijay";
    cout<<"\n3.king";
    cout<<"\n4.mithun";
    cout<<endl;
    cout<<"Choose your fav actor:";
    cin>>vote;
   if(vote<1 || vote>4)
   throw 2.5;
    
     cout<<"\nThank you for your vote";
  
   

    }

catch(int e)
{
    if(e==1)
    cout<<"\nYou are not eligible voter";

if(e==2)
   cout<<"\nvote invalidated";
}
catch(double){
    cout<<"Not a valid choice";
}
catch(char *e)//to catch the string type exception... 
{
    cout<<"You have to be indian to cast your vote";
}
cout<<"\nEnd of waiting";


}
int main()
{
    f1();
    return 0;
}
