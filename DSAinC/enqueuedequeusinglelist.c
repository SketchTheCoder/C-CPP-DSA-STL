#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Queue
{
int front,rear;
int a[MAX];
};
void initilize(struct  Queue* q)
{
  q->front=-1;
  q->rear=-1;
}
int Isfull(struct  Queue* q)
{
    if(q->front==0&&q->rear==MAX-1)
    return 1;

    return 0;
}
int Isempty(struct Queue* q)
{
    if(q->front==-1||q->rear==-1)
    return 1;

    return 0;
}
int Enqueue(struct Queue* q,int value)
{
    if(Isfull(q))
    {
     printf("Queue is full cannot be Enqueued:\n");
     return 0;
    }
    if(q->front==-1)
    {
        q->front=0;
    }
    q->rear++;
    q->a[q->rear]=value;
    printf("%d enqueud to queue\n",value);
}
int deque(struct  Queue* q)
{
   if(Isempty(q))
   {
printf("Queue is empty can not deque:");
return -1;
   }
int dequeuedvalue=q->a[q->front];
if(q->front==q->rear)
    q->front=q->rear=-1;

    else
    q->front++;

return dequeuedvalue;    
}
void display(struct  Queue* q)
{
if(Isempty(q))
{
  printf("Queue is empty:");
  return;
}
printf("Queue elements: ");
for(int i=q->front;i<=q->rear;i++)
{
    printf("%d ",q->a[i]);
}
printf("\n");
}
int main()
{
    struct  Queue q;
    initilize(&q);
    Enqueue(&q,4);
    Enqueue(&q,5);
    Enqueue(&q,6);
    Enqueue(&q,7);
    deque(&q);
    display(&q);
    return 0;
}