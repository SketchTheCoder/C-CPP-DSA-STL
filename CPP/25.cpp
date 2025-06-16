#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("item.txt");
   string name;
    int cost;
    cout<<"Enter name :\n";
    cin>>name;
    cout<<"Enter cost: \n";
    cin>>cost;
    fout<< name <<endl;
    fout<< cost <<endl;
    fout.close();
    ifstream fin("item.txt");
    fin>>name;
    fin>>cost;
    cout<<"Name: "<<name<<endl;
    cout<<"Cost: "<<cost<<endl;
    fin.close();
return 0;
}

