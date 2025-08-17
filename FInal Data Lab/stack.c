#include <stdio.h>
int isEmpty();
int isFull();
void push(int data);
void pop();
void display();
void peek();

#define Max 5
int data[Max];
int top = -1;

int isEmpty()
{
    if (top == -1)
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
    if (top == Max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int value)
{
    if (isFull())
    {
        printf("Overflow\n");
    }
    else
    {
        top = top + 1;
        data[top] = value;
        printf("%d added Successfull.\n", value);
    }
}

void pop()
{

    if (isEmpty())
    {
        printf("Underflow.\n");
    }
    else
    {
        printf("%d removed.\n", data[top]);
        top = top - 1;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("empty Stack.\n");
    }
    else
    {
        printf("\nstack List:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d \n", data[i]);
        }
    }
}
int main()
{

    push(30);
    push(40);
    push(50);
    push(60);
    push(40);
    display();
    pop();
    display();
    return 0;
}