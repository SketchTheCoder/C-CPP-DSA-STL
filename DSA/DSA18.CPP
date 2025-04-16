#include<iostream>
using namespace std;
struct node{
int item;
int vertex;
node *next;
};
class AdjList{//A type of linked list..
    node *start;
    int vertix;
    public:
    AdjList();
    AdjList(int);
    node* getstart();
    void setvertix(int);
    void addnode(int,int);
    void removeFirstnode();
    void printlist();
    ~AdjList();
};
node* AdjList::getstart()
{
    return start;
}
void AdjList::printlist()
    {
      node *t;
      t=start;
      while(t)
      {
         cout<<" ("<<t->vertex<<", "<<t->item<<") ";
         t=t->next;
      }
    }
void AdjList::removeFirstnode()
{
node *r;
if(start)
 {
    r=start;
    start=start->next;
    delete r;
 }
}
AdjList::~AdjList()
{
while(start)
  removeFirstnode();
}    
void AdjList::setvertix(int v)
{
vertix=v;
}
void AdjList::addnode(int v,int data)
{
    node *n=new node;
    n->item=data;
    n->vertex=v;
    n->next=start;
    start=n;  
}
AdjList::AdjList()
{
    start=nullptr;
}
AdjList::AdjList(int v)
{
    start=nullptr;
    vertix=v;
}
class graph
{
int v_count;//Number of nodes..
AdjList *arr;//This points to the adjlist..
public:
graph();
int getVcount();
void createGraph(int);
void printgraph();
~graph();
};
graph::graph()
{
v_count=0;
arr=nullptr;
}
int graph::getVcount()
{
return v_count;
}
void graph::createGraph(int vno)
{
int n,v,data;
v_count=vno;
arr=new AdjList[v_count];
for(int i=0;i<v_count;i++)
{
    arr[i].setvertix(i);
    cout<<"\nHow many adjacent nodes of v"<<i<<":";
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cout<<"\nEnter vertix number:";
        cin>>v;
        data=10;//can also be asked from user
        arr[i].addnode(v,data);
    }
}
}
void graph::printgraph()
{
for(int i=0;i<v_count;i++)
{
    cout<<endl;
    arr[i].printlist();
}
}
graph::~graph()
{
    delete []arr;//It deletes the pointer which points to the list...
}