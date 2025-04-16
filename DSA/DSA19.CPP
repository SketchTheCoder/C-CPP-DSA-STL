#include<iostream>
#include<stack>
using namespace std;
void bubble_sort(int a[],int size)//It runs size -1 times even if it is sorted early....
{
    int n=size,count=0;
    while(n-1)
    {
    for(int i=0;i<size;i++)
    {
        if(a[i]>a[i+1])
        {
            int t;
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    count++;
    n--;
}
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<size;i++)
       cout<<a[i]<<endl;
    cout<<"No of times loop run="<<count;   
}
void modified_bubble_sort(int arr[],int size)//It should stop running after sorting the elements...
{
    int n=size,a,count=0;
    while(n-1)
    {
        count++;
        a=0;
        for(int i=0;i<size;i++)
        { 
             if(arr[i]>arr[i+1])
             {
                
                int t;
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
                a=1;
             }
        
        }
        if(a!=0)
            break;
          n--;
    }
for(int i=0;i<size;i++)
     cout<<arr[i]<<endl;
 cout<<"No of times loop run="<<count;   
}
void insertion_sort(int a[],int size)//Assuming 1st elemet is at its orginal place...
{
    for(int i=1;i<size;i++)
    {
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<size;i++)
       cout<<a[i]<<endl;
}
int minvalueIndex(int a[],int size,int j)
{
int i,min,minIndex;
min=a[j];
minIndex=j;
for(int i=j+1;i<size;i++)
{
     if(min>a[i])
        {
            min=a[i];
            minIndex=i;
        }  
}
}
void selection_sort(int a[],int size)
{
int t,i,minIndex;
for(i=0;i<size-1;i++)
{
    minIndex=minvalueIndex(a,size,i);
    t=a[i];
    a[i]=a[minIndex];
    a[minIndex]=t;
}    
cout<<"\n array:"<<endl;
for(int i=0;i<size;i++)
   cout<<a[i]<<endl;
}
int quick(int a[],int left,int right)//This function take the loc element or one element to its position...
{
    int loc=left,t;
    while(left<right)
    {
        while(left<right && a[loc]<=a[right])
          right--;
        if(left==right)
          break;
        t=a[loc];
        a[loc]=a[right];
        a[right]=t;
        loc=right;
        while(left<right && a[left]<=a[loc])
           left++;
        if(left==right)
           break;
        t=a[left];
        a[left]=a[loc];
        a[loc]=t;
        loc=left;        
    }
    return loc;
}
void quicksort(int a[],int startIndex,int EndIndex)
{
int loc;
loc=quick(a,startIndex,EndIndex);
if(loc>startIndex+1)
    quicksort(a,startIndex,loc-1);
if(loc<EndIndex-1)
     quicksort(a,loc+1,EndIndex);    
}
void QuicksortLoop(int a[],int startindex,int endindx)
{
int loc,i,j;

}
int main()
{
    int a[]={11,2,10,47};
  selection_sort(a,4);
    return 0;
}