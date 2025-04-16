#include<iostream>
using namespace std;
void swap_by_value(int first,int second)
{
    int temp;
    temp=first;
    first=second;
    second=temp;
    cout<<"After swaping:\n"<<endl;
    cout<<first<<" "<<second<<endl;
}
void swap_by_pointer(int *first,int*second)
{
    int temp;
    temp=*first;
    *first=*second;
    *second=temp;
}
void swap_by_reference(int &first,int&second)
{
    int temp;
    temp=first;
    first=second;
    second=temp;
}
int main()
{
    int x=22,y=23;
    swap_by_value(x,y);
    int p=1004,q=2004;
    swap_by_pointer(&p,&q);
    cout<<p<<" "<<q<<endl;
    int m=700,n=1400;
    swap_by_reference(m,n);
    cout<<m<<" "<<n<<endl;
    return 0;
}