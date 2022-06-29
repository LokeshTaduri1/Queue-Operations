// Circular Queue //



#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int rear;
    int front;
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
        printf("Queue Overflow");

    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

void dequeue(struct queue *q)

{
    if(q->rear==q->front)
    {
        printf("Queue is Empty");
    }
    
    else{
        q->front=(q->front+1)%q->size;
    }
}

void display(struct queue q)
{
    int i=q.front+1;
    
    do
    {
        printf("%d ",q.Q[i]);
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
}

int main()

{
    struct queue q;
    create(&q,10);
    enqueue(&q,12);
    enqueue(&q,10);
    enqueue(&q,10);
    enqueue(&q,10);
    enqueue(&q,200);
    dequeue(&q);
    display(q);
}
