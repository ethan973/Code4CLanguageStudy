#include <stdio.h>

void increment(int *m);

int main()
{
    int x = sizeof(3.14);
    printf("hello\n");
    printf("x size=%d\n", x);
    printf("x address is %p\n", &x);
    increment(&x);
    printf("x value is %d\n", x);
    return 0;
}

void increment(int *m)
{
    *m = *m * 5 + 1;
}
