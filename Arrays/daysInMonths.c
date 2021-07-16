#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main()
{
  //We used define months 12 above to create a constant in C

  int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

  int index;

  for (index = 0; index<MONTHS;index++)
  {
      int count = 0;
      count = index + 1;
      printf("The number of days in month %d is %d\n",count, days[index]);
  }

    //There is no way to initialize all the elements in an array to a repeat value in C
    //Every value would have to be explicitly assigned
    //Use loops!

    int array[10] = {12,27,32,41};

    for (int i =4; i<10;i++)
    {
        array[i] = i*i;
    }

    printf("\nPrinting the array where we initialized elements with a loop:\n");

    for (int i = 0; i<10; i++)
    {
        printf("%d\n",array[i]);
    }




  return 0;
}
