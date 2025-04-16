#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,s=0;
    cout<<"Enter elements of the array:";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
       s=s+arr[i];
    }
    cout<<"sum is "<<s;
    return 0;
}