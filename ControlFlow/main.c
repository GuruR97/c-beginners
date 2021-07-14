#include <stdio.h>
#include <stdlib.h>

int main()
{
    double hours;
    double tax;
    double grossPay;
    double netPay;

    printf("Enter how many hours you worked this week\n");
    scanf("%lf", &hours);
    printf("You entered %lf hours\n",hours);


    if (hours<=40)
    {
        grossPay = hours * 12;
    }
    else
    {
        grossPay = ((40 * 12) + ((hours-40) * 18));
    }

    if (grossPay<=300)
    {
        tax = .15 * grossPay;
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        tax = (.15 * 300) + ((grossPay-300) * .2);
    }
    else if (grossPay >= 450)
    {
        tax = (.15 * 300) + (150 * .2) + ((grossPay-450) * .25);
    }

    netPay = grossPay - tax;

    printf("Gross Pay is $%.2lf\nTax is $%.2lf\nNet Pay is $%.2lf\n", grossPay, tax, netPay);

    return 0;
}


