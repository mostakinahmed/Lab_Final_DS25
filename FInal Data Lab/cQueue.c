#include <stdio.h>
int isEmpty();
int isFull();
void enqueue(int data);
void display();
void peek();

#define Max 5
int data[Max];
int front = -1, rear = -1, size = Max;

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

int enQueue(int value)
{
    if (isFull())
    {
        printf("Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % size;
        data[rear] = value;
        printf("%d added Successfull.\n", value);
    }
}

void deQeueue()
{

    if (isEmpty())
    {
        printf("Underflow.\n");
    }
    else
    {
        printf("%d removed.\n", data[front]);
        front = (front + 1) % size;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("empty queue.\n");
    }
    else
    {
        printf("\nQueue List:\n");
        for (int i = front;; i = (i + 1) % size)
        {
            printf("%d ", data[i]);
            if (i == rear)
            {
                break;
            }
        }
    }
}
int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    deQeueue();
    enQueue(60);
    deQeueue();
    enQueue(40);
    enQueue(50);
    // deQeueue();
    // deQeueue();
    display();
    return 0;
}