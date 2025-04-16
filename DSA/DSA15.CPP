#include<iostream>
using namespace std;
void printN(int n)
{
if(n>1)
  printN(n-1);
cout<<n<<endl;
}
void printNnaturalreversseorder(int n)
{
cout<<n<<endl;
if(n>1)
    printNnaturalreversseorder(n-1);
}
void printNodd(int n)
{
    if(n>0)
    {
        printNodd(n-1);
        cout<<2*n-1<<endl;
    }
}
void printNoddreverse(int n)
{
    if(n>0)
    {
        cout<<2*n-1<<endl;
        printNoddreverse(n-1);
    }
}
void printNeven(int n)
{
    if(n>0)
    {
        printNeven(n-1);
        cout<<2*n<<endl;
    }
}
void printNevenreverse(int n)
{
    if(n>0)
    {
        cout<<2*n<<"\n";
        printNevenreverse(n-1);
    }
}
void printsquare(int n)
{
    if(n>0)
    {
        printsquare(n-1);
        cout<<n*n<<endl;
    }
}
void printsquarereverse(int n)
{
   
    if(n>0)
    {
        cout<<n*n<<endl;
        printsquarereverse(n-1);
    }
}
void printcube(int n)
{
if(n>0)
{
    printcube(n-1);
    cout<<n*n*n<<endl;
}
}
void printcubereverse(int n)
{
if(n>0)
{
    cout<<n*n*n<<endl;
    printcubereverse(n-1);
}
}
int main()
{
//printNnaturalreversseorder(15);
//printN(10);
//printNoddreverse(5);
//printNeven(10);  
//printNevenreverse(10);
//printsquare(5);
//printsquarereverse(5);
//printcube(5);
//printcubereverse(5);
return 0;
}
