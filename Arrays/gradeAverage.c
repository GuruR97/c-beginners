#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[10]; // this stores 10 values to the array
    int count = 10; //these are values to be read
    float sum = 0; // sum of the numbers
    float average = 0.0f; // average of the numbers

    printf("\nEnter the 10 grades:\n"); //Prompt for the input

    //Reads the ten numbers to be averaged

    for (int i = 0; i < count ; i++)
    {
        printf("%2u> ", i + 1);
        scanf("%f", &grades[i]);
        sum = sum + grades[i];
    }
    printf("\nthe sum is %f\n", sum);
    average = (float)sum/count; //this is the average. The float makes it case to a float
    printf("The average of the %d grades are %f", count, average);

    return 0;
}
