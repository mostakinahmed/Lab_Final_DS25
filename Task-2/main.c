#include <stdio.h>
#include <stdlib.h>

// initilize function
struct node *removeNodesWithValue(struct node *head, int delValue);
struct node
{
    int data;
    struct node *next;
};
//
// delete function
struct node *removeNodesWithValue(struct node *head, int delValue)
{
    struct node *temp = head;
    struct node *previous = NULL;

    while (temp != NULL)
    {
        if (temp->data == delValue)
        {
            if (temp == head)
            {
                head = temp->next;
                free(temp);
                temp = head; // update temp
            }
            else
            {
                previous->next = temp->next;
                free(temp);
                temp = previous->next; // update temp
            }
        }
        else
        {
            previous = temp; // previous node
            temp = temp->next;
        }
    }

    return head;
}

//
//
//
int main()
{
    int size, i = 1, value, delValue;
    printf("Enter Linked List Size: ");
    scanf("%d", &size);

    // declare variable
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;

    // take input data from user
    for (int i = 0; i < size; i++)
    {
        printf("Enter data[%d]: ", i + 1);
        scanf("%d", &value);

        // allocate address
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = value;
        temp->next = NULL;

        // true only first time
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = temp;
        }
    }

    // print Original Linked List
    printf("--------Original Linked List:--------\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    //
    //
    // Delete Program Start
    printf("\nEnter Delete data: ");
    scanf("%d", &delValue);

    head = removeNodesWithValue(head, delValue); // send head and delte element

    // print latest Linked List
    printf("\n---------Update Linked List:---------\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
