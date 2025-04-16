#include <iostream>
using namespace std;
int main() 
{
    int i = 100;
    char c = 'Z';
    double x = 5.2;
    // c implicitly converted to int. ASCII
    // value of 'Z' is 90
        i = i * c+10;
cout<<"Implicit conversion:"<<endl;
    // x is implicitly converted to float
    float k = i + 1.0;
    cout << "i = " << i << endl
         << "c = " << c << endl
         << "k = " << k;
cout<<endl;
cout<<"Explicit conversion:"<<endl;
    // Explicit conversion from double to int
    int Total = (int)x + 5;
    cout << Total;
    return 0;
}