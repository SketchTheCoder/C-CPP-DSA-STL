#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
void setdata(int x, int y){a=x; b=y;}
void showdata(){cout<<"a= "<<a<<endl<<"b= "<<b;}
complex add(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp; 
}
complex subtract(complex c)
{
    complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp; 
}
complex multiply(complex c)
{
    complex temp;
    temp.a=a*c.a-b*c.b;
    temp.b=a*c.b+b*c.b;
    return temp;
}
};

class time
{
    private:
    int h,m,s;
    public:
    void set_time(int x, int y, int z){h=x; m=y; s=z;}
    void show_time()
    {
        cout<<h<<" hour "<<m<<" min "<<s<<" sec";
    }
void normalize()//make readle in day to life
{
    m+=s/60;
    s=s%60;
    h+=m/60;
    m%=60;

}
time time_add(time k)
{
    time temp;
    temp.h=h+k.h;
    temp.m=m+k.m;
    temp.s=s+k.s;
    temp.normalize();
    return temp;
}
bool is_great(time T)//if caaller objecct time is greater than return 1 else 0
{
    if(h>T.h)
return true;

else if(h<T.h)
return false;

else if(m>T.m)
return true;

else if(m<T.m)
return false;

else if(s>T.s)
return true;

else 
return false;
}
};
class Testresult
{
private:
int roll_no,right,wrong,net_score;
static int right_weightage,wrong_weightage;//means right answer marks and wrong answer marks...

public:
void setroll_no(int r){roll_no=r;}
void setright(int x){right=x;}
void setwrong(int w){wrong=w;}
void netscore(int s){net_score=s;}


static void setrightweight(int r){right_weightage=r;}
static void setwrongweight(int w){wrong_weightage=w;}
int getroll_no(){cout<<roll_no;}
int getright(){cout<<right;}
int getwrong(){cout<<wrong;}
int getnetscore(){return net_score;}

static int getrightweightage(){return right_weightage;}
static int getwrongweightage(){return wrong_weightage;}
};

void setTestreult(Testresult t,int r ,int right, int worng)
{
    t.setroll_no(r);
    t.setright(right);
    t.setwrong(worng);
// t.setnetscore(t.getright()*Testresult::getrightweightage()-t.getwrong()*Testresult::getwrongweightage());

}


int main()
{
    int r,right,wrong;
Testresult tr[5];
Testresult::setrightweight(3);
Testresult::setwrongweight(-1);
for(int i=0;i<5;i++)
{
    cout<<"enter details for test result"<<i+i;
    cout<<endl;
    cout<<"enter rollno: ";
    cin>>r;
    cout<<"enter number of wrong answers: ";
    cin>>right;
    cout<<"enter number of wrong answer: ";
    cin>>wrong;
    setTestreult(tr[i],r,right,wrong);
}

cout<<endl;
return 0;
}
