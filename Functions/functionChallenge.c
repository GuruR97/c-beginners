#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
float absValue(float x);
float sqrt(float x);

int main()
{


    float f1 = -15.5;
    float f2 = 20.0;
    float f3 = -5.0;
    int i1 = -716;
    float absValResult = 0;

    //testing the GCD function
    int result = gcd(40, 30);
    printf ("The GCD is %d\n",result);


    printf ("The GCD is %d\n",gcd(100,50));

    //Testing the absValue funtion

    absValResult = absValue(f1);
    printf("The result is %f\n",absValResult);


    absValResult = absValue((float) i1);
    printf("The result is %f\n",absValResult);

    absValResult = absValue (i1);
    printf ("result = %.2f\n", absValResult);

    printf ("result = %.2f\n", absValue(-6.0)/4);

    return 0;
}



int gcd(int x, int y)
{
    int gcd;
    if (x == 0 || y == 0)
    {
        return -1;
    }
    else
    {
     for (int i = 1; i<=x && i<=y; i++)
        {
        if(x%i == 0 && y%i ==0)
            {
            gcd = i;
            }
        }
        return gcd;
    }
}

float absValue(float x)
{
    if (x<0)
        x = -x;

    return x;
}

float sqrt(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    if (x<0)
    {
        printf("Negative argument for the sqrt.\n");
        return -1;
    }

    while (absValue (guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }
}




