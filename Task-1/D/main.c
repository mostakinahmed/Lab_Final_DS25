#include <stdio.h>

// initilize function
void task1D_recursive(int i, int n);

int main()
{
    int n, i = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    task1D_recursive(i, n); // call function & pass arguments i & N
}

void task1D_recursive(int i, int n)
{

    printf("%d ", i);
    if (i != n)
    {
        return task1D_recursive(++i, n); // increase value 1
    }
    else
    {
        return;
    }
}