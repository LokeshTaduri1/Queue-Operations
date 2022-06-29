// Queue Implementation using Linkedlist //



#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{

    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("Queue is Full");
    }
    
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }
        
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}
void dequeue()
{
    struct node *t;
    t=front;
    
    if(front==NULL)
    {
        printf("Queue is Empty");
    }
    
    else
    {
        front=front->next;
        free(t);
    }
}

void display()
{
    struct node *p=front;
    
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()

{
    enqueue(15);
    enqueue(25);
    enqueue(35);
    enqueue(45);
    dequeue();
    display();
}
