#include <stdio.h>

int main()
{
    unsigned long long sum = 0LL; //Stores the sum of the integers
    unsigned int count = 0; // the number of integers to be summed

    //enter the number of ints to be summed

    printf("Enter the number of integers you want to sum\n");
    scanf("%u",&count);

    for (unsigned int i = 1; i<=count; ++i)
    {
       sum += i;
    }

    printf("the sum of all ints from 1 to %u is %u",count,sum);


    return 0;
}

