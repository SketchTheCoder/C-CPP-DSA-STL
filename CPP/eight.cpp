#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    switch(n)
    {
        case 100:
        cout<<"Normal speed range";
        break;
        case 101:
        cout<<"Over_speed warning";
        break;
        case 88:
        cout<<"Low oil Pressure";
        break;
        case 187:
        cout<<"Engine Failure";
        break;
        default:
        cout<<"Invalid choice";
    }
    return 0;
}