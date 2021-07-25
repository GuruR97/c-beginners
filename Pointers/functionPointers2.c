#include <stdio.h>
#include <stdlib.h>

void increment(int *p)
{
    *p = (*p) + 1;
}
int main()
{
    int a;
    a = 10;
    increment(&a);
    printf("a = %d",a);
}

//This is call by reference. This can save a lot of memory.
