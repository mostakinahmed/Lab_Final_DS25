#include <stdio.h>

int main()
{
    int n = 10, temp, swap;
    int data[10] = {1, 4, 8, 5, 9, 10, 3, 6, 2, 7};

    printf("\nOld Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", data[i]);
    }

    for (int i = 0; i < n; i++)
    {
        swap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;

                swap = 1;
            }
        }
        if (swap == 0)
        {
            printf("\n\nBreak at iteration %d\n", i + 1);
            break;
        }
    }

    printf("\nNew Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", data[i]);
    }

    return 0;
}
