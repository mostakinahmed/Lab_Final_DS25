#include <stdio.h>
#define Max 5
int data[Max];
int front = -1, rear = -1;

int enQueue(int value)
{
    if (rear == Max - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = rear + 1;
        data[rear] = value;
        printf("%d added Successfull.\n", value);
    }
}

void deQeueue()
{

    if (front == -1)
    {
        printf("Underflow.\n");
    }
    else
    {
        printf("%d removed.\n", data[front]);
        front = front + 1;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("empty queue.\n");
    }
    else
    {
        printf("\nQueue List:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", data[i]);
        }
    }
}
int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    deQeueue();
    display();
    return 0;
}