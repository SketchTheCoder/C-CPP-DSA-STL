#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
int isempty()
{
  return front==-1;
}
int isfull()
{
  return  rear== SIZE-1;
}
void enqueue(int value)
{
    if(isfull())
        printf("Queue is full.");
    return;
    if(front==-1) front=0;
    queue[++rear]=value;
    printf("Enqued %d \n",value);
}
void deque()
{
    if(isempty())
      printf("Queue is empty.");
}