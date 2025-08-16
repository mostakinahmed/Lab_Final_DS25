#include <stdio.h>
#define Max 10
int data[Max];
int n = 0;

void addData(int data[])
{
    int pos, value;
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos > n + 1)
    {
        printf("Invalid postion.\n");
        return;
    }

    printf("Enter new value: ");
    scanf("%d", &value);

    if (pos == n + 1) // for adding last element
    {
        data[n] = value;
        n++;
        return;
    }

    for (int i = n - 1; i >= pos - 1; i--)
    {
        // assign new value
        if (i == pos - 1)
        {
            data[i] = value;
            break;
        }

        data[i + 1] = data[i];
    }
    n++;
}

void delData(int data[])
{
    int value;
    printf("Enter delete data: ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++) //del all
    {
        if (data[i] == value)
        {
            for (int  j = i; j < n; j++)
            {
               data[j]=data[j+1];
            }
            n--;
        }
    }
}

int main()
{

    printf("Enter array size: ");
    scanf("%d", &n);

    // take input
    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    int option;
    printf("1. Adding \n2. Delete \n");
    printf("option......");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        addData(data);
        break;
    case 2:
        delData(data);
        break;

    default:
        break;
    }

    // display data
    printf("Latest Data:\n");
    printf("------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}