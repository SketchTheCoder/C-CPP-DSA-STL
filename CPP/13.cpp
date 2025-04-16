#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[]="sketch",b[6],c[]="hira";
    strcpy(b,a);// this function is used to copy a string.
    cout<<"After copy = "<<b<<endl;
   int l= strlen(a);//this function is used to find length a string.
   cout<<"Length of string a = "<<l<<endl;
   strcat(a,c);//this function is used to combine two strings.
   cout<<"After combining = "<<a<<endl;
   strrev(b);//this function is used to reverse a string.
   cout<<"Reverse of string = "<<b<<endl;
   strlwr(c);//this function is used to convert a string into lowercase.
   cout<<"In lowercase = "<<c<<endl;
   
    return 0;  
}