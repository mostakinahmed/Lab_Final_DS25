#include <stdio.h>
int isEmpty();
int isFull();
void enqueue(int data);
void display();
void peek();

#define Max 5
int front = -1, rear = -1, size = Max;
int data[Max];

// initialize function
int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if ((front == 0 && rear == size - 1) || (front == (rear + 1) % size))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("%d is not inserted. Queue is Full.", value);
        return;
    }
    else
    {
        if (front == -1)
        {
            front = front + 1;
        }

        rear = (rear + 1) % size;
        data[rear] = value;
        printf("%d is inserted.\n", value);
    }
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue is Empty.");
        return;
    }
    else
    {
        printf("%d is deleted.\n", data[front]);
        front = (front + 1) % size;
    }
}

void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("Peek element is %d.", data[front]);
    }
}

void display()
{

    if (isEmpty())
    {
        printf("Empty Queue.");
    }
    else
    {
        int i = front;
        while (1)
        {
            printf("%d - %d \n", i, data[i]);
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % size;
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    enqueue(70);
    dequeue();
    enqueue(550);
    peek();
    printf("\n");
    display();
}