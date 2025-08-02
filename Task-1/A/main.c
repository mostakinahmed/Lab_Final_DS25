#include <stdio.h>

// initilize function
void task1A(int n);

int main()
{
    task1A(10); // call function & pass value 10
    return 0;
}

void task1A(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}