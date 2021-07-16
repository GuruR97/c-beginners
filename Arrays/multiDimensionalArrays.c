#include <stdio.h>
#include <stdlib.h>

int main()
{
    //The C language allows you to define any dimensional array, but linear and 2d arrays are the most common
    {
        //matrices, tables, rows * columns = 2d arrays


        int matrix[3][4] =
        {
            {10,2,2,2}, //Values for the first row
            {10,2,2,2}, //Values for the second row
            {10,2,2,2}, //Values for the third row
        };

        // this is initializing certain values
        // All unset values will be 0 by default

        int matrix2[5][6] =
        {
            {10,2,2,2},
            {10,2,2,2},
            {10,2,2,2},
        };

        //To have some designated initializers, do this:

        int matrix3[4][3] = {[0][0] = 7, [1][2] = 2, [3][2] = 10};

        for (int i = 0; i < 4; i++)
        {
            for (int j=0; j<3; j++)
            {
                printf ("%d  ", matrix3[i][j]);
            }
            printf("\n");
        }
        //nested loops are a must when dealing with multidimensional arrays

    }
}
