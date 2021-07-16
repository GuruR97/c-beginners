#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    //In this case, the 2d array represents number of strings and how many max characters that a string can have
    char Array[12][50] = {"Jan", "Feb", "March"};

    //You can even remove the 12, due to the array initializer nature with strings
    //Only the second dimension needs to be specified.
    //Interestingly enough, C does not set the rest of the values in the array to 0. Perhaps because it judges based on the input as mentioned above


    /*string copy
    strcpy(Array[0], "Jan");
    strcpy(Array[1], "Feb");
    strcpy(Array[2], "March");
    This is essentially what C is doing behind the scenes. Calling this command for every String
    */

    for (int i=0; i<12; i++)
    {
        printf("%s\n",Array[i]);
    }


    int intArray[5] = {1,2,3};
    for (int i=0; i<5; i++)
    {
        printf("%d\n",intArray[i]);
    }



    return 0;
}
