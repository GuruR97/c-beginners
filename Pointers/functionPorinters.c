#include <stdio.h>
#include <stdlib.h>

int increment(int a)
{
   a++;
   return a;
}

int main()
{
    int a = 1;
     a = increment(a);
    printf("%d\n",a);
}

// The above is all call by value.
