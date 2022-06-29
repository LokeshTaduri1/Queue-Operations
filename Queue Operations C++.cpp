// Queue Operations //




#include<iostream>
using namespace std;

class queue
{
    private:
    
      int front;
      int rear;
      int size;
      int *Q;
      
    public:
    
      queue()
      {
          front=rear=-1;
          size=10;
          Q=new int[size];
      }
      
      queue(int size)
      {
          front=rear=-1;
          this->size=size;
          Q=new int[this->size];
      }
      
      void enqueue(int x);
      void dequeue();
      void display();
};

void queue::enqueue(int x)
{
    if(rear==size-1)  printf("Queue Full");
    else{
        rear++;
        Q[rear]=x;
    }
}

void queue::dequeue()
{
    if(front==rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        front++;
    }
}

void queue::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        printf("%d ",Q[i]);
    }
}

int main()

{
    queue q(4);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.dequeue();
    q.display();
    
}
