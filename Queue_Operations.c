/* Queue Operations /*



#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,int x)

{
    if(q->rear==q->size-1)

    {
        printf("Queue is full");
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
void dequeue(struct queue *q)
{
    if(q->front==q->rear)
    {
        printf("Queue is Empty");
    }
    else{
        q->front++;
    }
}
void display(struct queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        printf("%d ",q.Q[i]);
    }
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,110);
    enqueue(&q,120);
    enqueue(&q,130);
    enqueue(&q,140);
    enqueue(&q,150);
    dequeue(&q);
    display(q);
}
