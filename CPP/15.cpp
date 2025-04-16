#include<iostream>
using namespace std;
class shoppingList{
int price[10],number[10],count=0;
public:
void Enterproductdetail()
{
    int n;
    cout<<"Enter total number of items in the list :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"Enter price :"<<endl;
    cin>>price[i];
    cout<<"Enter the number of item:"<<endl;
    cin>>number[i];
    count++;
    }
}
void display()
{
    cout<<"Product details:"<<endl;
    for(int i=0;i<count;i++)
    {
    cout<<"Number = "<<number[i]<<"\n Price = $"<<price[i]<<endl;
    }
}
void dltitem()
{
int x,i;
cout<<"Enter number of the item you want to delete:"<<endl;
cin>>x;
for( i=0;i<count;i++)
{
    if(number[i]==x)
    {
        number[i]==0;
        price[i]==0;
        count--;
        cout<<"Item deleted:\n";
        break;
    }
}
if(i==count)
cout<<"Item not found:"<<endl;

}
void totalamount()
{
    int sum=0;
    for(int i=0;i<count;i++)
    sum+=price[i];

    cout<<"Total amount: $"<<sum<<endl;
}
};
int main()
{
    shoppingList S;
    int ch;
    do{
        int choice;
        cout<<"Enter 1 to enter the product detais\n";
        cout<<"Enter 2 to display product details\n";
        cout<<"Enter 3 for total amount of this list\n";
        cout<<"Enter 4 to delte an item from the list\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            S.Enterproductdetail();
            break;

            case 2:
            S.display();
            break;

           case 3:
           S.totalamount();
           break;
           
           case 4:
           S.dltitem();
           break;

           default:
           cout<<"Invalid choice:";

        }
        cout<<"Press 5 to continue or any other number to stop:";
        cin>>ch;
    }
    while(ch==5);
}