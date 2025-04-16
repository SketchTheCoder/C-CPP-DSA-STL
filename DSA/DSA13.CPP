#include<iostream>
using namespace std;
#define PQ_UNDERFLOW
struct node{
int item;
int PN0;
node *next;
};
class PQ{
private:
node *start;
public:
PQ();
bool is_empty();
void insert(int ,int);
void dltHP();
int getHP();
int getPNO();
~PQ();
};
PQ::PQ()
{
    start=nullptr;
}
bool PQ::is_empty()
{
    return start=nullptr;
}
void PQ::insert(int data,int pno)
{
    node *n=new node;
    n->item=data;
    n->PN0=pno;
    n->next=nullptr;
    if(is_empty()||start->PN0<pno)
     {
        n->next=start;
        start=n;
     }
     else{
        node *temp;
        temp=start;
        while(temp->next!=nullptr)
        {
            if(temp->next->PN0<pno)
            {
                n->next=temp->next;
                break;
            }
            temp=temp->next;
        }
        temp->next=n;
     }
}
void PQ::dltHP()
{
if(is_empty())
     throw PQ_UNDERFLOW;
node *temp;
temp=start;
start=start->next;
delete temp;
}
int PQ::getHP()
{
    if(is_empty())
         throw PQ_UNDERFLOW;
    return start->item;     
}
int PQ::getPNO()
{
    if(is_empty())
       throw PQ_UNDERFLOW;
    return start->PN0;   
}
PQ::~PQ()
{
    while(!is_empty())
      dltHP();
}
