#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double RainfallStats[5][12] =

    {

        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},

        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},

        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},

        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},

        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}

    };

    double sum = 0;
    double count = 0;
    double year = 0;
    double yearlySubtotal;

    printf("YEAR\t\t\tRAINFALL (inches)\n");
    for (int i = 0; i<5; i++)
    {

        for (int j = 0; j<12; j++)
        {
            sum = sum + RainfallStats[i][j];
            count++;

            yearlySubtotal = yearlySubtotal + RainfallStats[i][j];

        }


        printf("%lf\t\t%lf\n",2010+year,yearlySubtotal);
        yearlySubtotal = 0;
        year++;
    }

    printf("\nThe total rainfall for the 5 years is %lf\n", sum);
    printf("Total number of days is %lf\n", count);
    printf("The average monthly rainfall for the 5 years is %lf\n", sum/count);
    printf("The average yearly rainfall for the 5 years is %lf\n", sum/5);


    //With this program, the only upgrade I can see is reducing the decimal points. Look into how to do that with casting to a float (maybe)


    return 0;
}
