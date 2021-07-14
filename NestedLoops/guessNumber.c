#include <stdio.h>
#include <time.h>

int main()
{
    printf("This is a guessing game\nI have chosen a number between 0 and 20 which you must guess.\n");

    int guess;
    time_t t;

    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;

    for (int i = 5; i>0; --i)
    {
        printf("You have %d tries left\n",i);
        printf("Please enter a number\n\n");
        scanf("%d",&guess);


        if (guess==randomNumber)
        {
            printf("\nCongrats! %d is correct.",guess);
            break;
        }
        else if(guess <0 || guess>20)
        {
            printf("I said the number was between 0 and 20 \n");
        }
        else if (guess<randomNumber)
        {
            printf("\nSorry, %d is wrong. My number is more than that\n",guess);
        }
        else if (guess>randomNumber)
        {
            printf("\nSorry, %d is wrong. My number is less than that\n",guess);
        }

    }
    printf("\nYou used up all your guesses. You have lost the game\n");
    printf("My number was %d",randomNumber);
    return 0;
}
