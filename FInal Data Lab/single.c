#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *prevNode;
struct node *creteNode(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void append(struct node **head, int value)
{

    struct node *newNode = creteNode(value);

    if (*head == NULL)
    {
        *head = newNode;
        prevNode = newNode;
    }
    else
    {
        prevNode->next = newNode;
        prevNode = newNode;
    }
}

display(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

struct node *removeNodesWithValue(struct node *head, int value)
{
    struct node *temp = head;
    struct node *prevNode = NULL;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            if (temp == head)
            {
                head = temp->next;
                free(temp);
                temp = head;
            }
            else
            {

                prevNode->next = temp->next;
                free(temp);
                temp = prevNode->next;
            }
        }
        else
        {
            prevNode = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    struct node *head = NULL;

    int value = 20;
    append(&head, 20);
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 20);

    head = removeNodesWithValue(head, value);
    display(head);

    return 0;
}