#include <stdio.h>

// initilize function
void task1C(int n);

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    task1C(n); // call function & pass arguments N
    return 0;
}

void task1C(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}