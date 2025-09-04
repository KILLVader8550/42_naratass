#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;
    int temp;

    a = 5;
    b = 4;
    printf("before a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("after a: %d, b: %d\n", a, b);
    return (0);
}