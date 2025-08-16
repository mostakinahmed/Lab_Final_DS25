#include <stdio.h>

#define Max 10
int data[Max];
int n;

int binary(int data[], int value)
{
    int f = 0, l = n - 1, mid = 0;

    while (f < l)
    {
        mid = (f + l) / 2;

        if (data[mid] == value)
        {
            return mid;
        }
        else if (data[mid] > value)
        {
            l = mid - 1;
        }
        else
        {
            f = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int value;
    printf("Enter array size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    printf("Enter Search Data: ");
    scanf("%d", &value);

    int index = binary(data, value);
    if (index != 0)
    {
        printf("Data %d Found at index %d.\n", data[index], index);
    }
    else
    {
        printf("Data %d is Not Found.\n", value);
    }

    return 0;
}