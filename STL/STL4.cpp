#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={2,34,56,78,90};
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<"\n------------------------\n";
    vector<float> v2={2.3,7.8,8.9,9.0,4.5};
    for(int i=0;i<v2.size();i++)
    cout<<v2.at(i)<<" ";
    cout<<"\n------------------------\n";
    vector<char> v3={'a','b','c','d','e'};
    for(auto x:v3)
    cout<<x<<" ";
    cout<<"\n------------------------\n";
    vector<int> v4={2,34,56,78,90};
    vector<int>::iterator it;
    for(it=v4.begin();it!=v4.end();it++)
    cout<<*it<<" ";
    return 0;
}