#include<iostream>
using namespace std;
class Bank_account{
private:
char name_of_depositor[20];
int Account_number;
char Account_type; 
int Balance_amount;
public:
void initializeDetail();
void deposit();
void withdraw();
void displayBankdetails();
};
void Bank_account::initializeDetail()
{
    cout<<"Enter the name of depositer:";
    cin>>name_of_depositor;

    cout<<"Enter nine digit account number:";
    cin>>Account_number;

    cout<<"Enter the balance in account:";
    cin>>Balance_amount;
}
void Bank_account::deposit()
{
    int x;
    cout<<"Enter amounnt to deposit:"<<endl;
    cin>>x;
    Balance_amount+=x;
}
void Bank_account::withdraw()
{
    int x;
    cout<<"Enter amounnt to withdraw:"<<endl;
    cin>>x;
    cout<<"Enter account type:";
    cin>>Account_type;
    if(Account_type=='C')
      {
        if(Balance_amount>=x)
            Balance_amount-=x;
         else
           cout<<"Insufficient Balance"<<endl;  
           cout<<"Balance: "<<Balance_amount<<endl;
      }
   else
   {
    if( Balance_amount-x>=2000)
        Balance_amount-=x; 
    else
        cout<<"Insufficient Balance"<<endl; 
        cout<<"Balance: "<<Balance_amount<<endl;
   }
}
void Bank_account::displayBankdetails()
{
    cout<<"Bank details:"<<endl;
    cout<<"Account Holder Name: "<<name_of_depositor<<endl;
    cout<<"Account Number: "<<Account_number<<endl;
    cout<<"Balance Amount: "<<Balance_amount<<endl;
}
int main()
{
    Bank_account b1;
    b1.initializeDetail();
    //b1.deposit();
    b1.withdraw();
    b1.displayBankdetails();
    return 0;
}