#include<iostream>
using namespace std;
class a{
    public:  
    int abc;
    a(){abc=0;}
    a(int k){abc=k;}
    a(a &a1){abc=a1.abc;}
    void display()
        {
            cout<<" value : "<<abc<<endl;
        } 
};
int main()
{
a a1,a2(34),a3(4),a4(a3);
a1.display();
cout<<"\n";
a2.display();
cout<<"\n";
a4.display();
return 0;
}