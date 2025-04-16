#include<iostream>
#include<string.h>
using namespace std;
class complex 
{
private:
int a,b;
public:
void set_a(int x){a=x;}
void set_b(int y){b=y;}
complex operator+(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}

complex operator-(complex c)
{
    complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
complex operator*(complex c)
{
    complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp;
}
bool operator==(complex c)
{
    if(a==c.a && b==c.b)
    return true;
    else 
    return false;
}
void show_a_and_b(){cout<<a<<endl<<b;}
};
class Time
{
private:
int hour,min,sec;
public:
void set_time(int x,int y,int z){hour = x; min =y;sec=z; }
void Normalise()
{
min=min + (sec/60);
sec=sec%60;
hour=hour+(min/60);
min=min%60;
}
bool operator>(Time t)
{
    if(hour>t.hour)
    return true;
    else if(hour<t.hour)
    return false;
    else if(min>t.min)
    return true;
    else if(min<t.min)
    return false;
    else if(sec>t.sec)
    return true;
    else
    return false;

}

Time operator+(Time t)
{
    Time k;
    k.hour=hour+t.hour;
    k.min=min+t.min;
    k.sec=sec+t.min;
    k.Normalise();
    return k;

}
void showTime(){cout<<hour<<":"<<min<<":"<<sec;}
/*Time operator++()//It is a uniary operaaotr so no argument can be passed//(pre increment=new value return)
{
sec++;
min=min+(sec/60);
sec=sec%60;
hour=hour+(min/60);
min=min%60;
return *this;//It returns the caller object as sec is increased in caller object..
}*/
Time operator++()//post increment returns past value but increment happens...
{
    Time temp=*this;
sec++;
min=min+(sec/60);
sec=sec%60;
hour=hour+(min/60);
min=min%60;

return temp;;//It returns the caller object previous output as we have stored that in temp..
}
};
class matrix
{
 private:
 int A[3][3];
 public:
 void inputmatrix()
 {
    cout<<"enter nine numbers of the matrix:";
    for(int i=0;i<=2;i++)
       for(int j=0;j<=2;j++)
          cin>>A[i][j];
 }
 void printmatrix()
 {
    cout<<endl;
    for(int i=0;i<=2;i++)
    {
    for(int j=0;j<=2;j++)
        cout<<A[i][j]<<" ";
    cout<<endl;  

  }
}
matrix operator+(matrix M)
{
    matrix temp;
    for(int i=0;i<=2;i++)
       for(int j=0;j<=2;j++)                                    
        temp.A[i][j]=A[i][j]+M.A[i][j];

        return temp;
}
matrix operator-(matrix N)
{
    matrix temp;  
      for(int i=0;i<=2;i++)
       for(int j=0;j<=2;j++)     
        temp.A[i][j]=A[i][j]-N.A[i][j];

        return temp;
}
matrix operator*(matrix M)
{
   
    matrix temp;
    int sum,i,j,k;
    for(i=0;i<=2;i++)
      for(j=0;j<=2;j++)
      {
         for(k=0;k<=2;k++)
         sum+=A[i][k]*M.A[k][j];
      temp.A[i][j]=sum;   

}
return temp;   
}

};
int main()
{
    matrix A,B,C;
    A.inputmatrix();
    B.inputmatrix();
    C=A*B;
    C.printmatrix();
    return 0;

}
