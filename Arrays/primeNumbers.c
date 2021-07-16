#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //program to find all the prime numbers from 3-100

    int p; // counter for the loop for p-100 numbers

    int primes[50] = {[0] = 2, [1] = 3};
    int primeIndex = 2;

    bool isPrime;

    //hardcode the first 2 prime numbers


    for (p=3; p<=100; p = p+2)
    {
        isPrime = true;

        for (int i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if (p % primes[i] == 0)
            {
                isPrime = false;
            }
        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }

        }
    }
    for (int i=0; i<primeIndex;i++)
    {
        printf("%i ", primes[i]);

    }
    printf("\n");
    return 0;


    //Honestly I don't really get this program. The prime number algo is way too confusing, so worth reviewing. The output isn't even right
}
