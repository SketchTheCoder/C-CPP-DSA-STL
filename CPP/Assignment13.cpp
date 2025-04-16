#include<iostream>
#include<string.h>
using namespace std;
class Distance
{
 private:
 int km,m,cm;
 public:
 void setkm_m_cm(int x,int y, int z){km=x; m=y; y=z;}
 Distance operator+(Distance d){
    Distance temp;
    temp.km=km+d.km;
    temp.m=m+d.m;
    temp.cm=cm+d.cm;
    return temp;
 }
void show()
{
    cout<<km<<"km \n"<<m<<"m \n"<<cm<<"cm \n";

 }   

};
int main()
{
    Distance d1,d2,d3;
    d1.setkm_m_cm(13,500,34);
    d2.setkm_m_cm(4,400,56);
    d3=d1+d2;
    d3.show();
    return 0;
}