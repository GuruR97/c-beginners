#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integers[6] = {0,1,2,3,4,5}; // initialize the elements with a list

    int moreInt[5] = {0,1,2}; // The rest of the values are set to 0 in the array

    float sampleData[6] = {[2] = 34.1, [1] = 23.2, [0] = 32.1}; // pick which elements to initialize

    for (int i = 0; i<6; i++)
    {
        printf("%f\n",sampleData[i]);
    }

    //loops are commonly used to print values in an array

    return 0;
}
