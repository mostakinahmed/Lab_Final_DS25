#include <stdio.h>

// initilize function
void task1B_recursive(int n);

int main()
{
    task1B_recursive(1); // call function & pass value 1 for start
    return 0;
}

void task1B_recursive(int n)
{
    if (n <= 10) // continue upto 10
    {
        printf("%d ", n);
        return task1B_recursive(++n); // increase value 1
    }
}