#include <stdio.h>

int main()
{
    for (int i = 1, j = 2; i<=5; ++i, j=j+2)
    {
        printf("%5d",i*j); //the %5 sets the width of the output
    }
    return 0;
}

