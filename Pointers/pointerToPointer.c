#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;

    int **q = &p;

    int ***r = &q;

    printf("%d\n",*p); //6
    printf("%d\n",*q); //-13324 Because q points to p, which holds address of x
    printf("%d\n",&x);
    printf("%d\n",*(*q)); //6 Because q points to p, which points to x
    printf("%d\n",***r); // 6 Because r points to q, which points to p, which points to x
    printf("\n");

    ***r = 10; // This causes x to now equal 10
    printf("%d\n",x);
    **q = *p + 2; //**q is equal to the value in x, because that is what x holds and q points to p which points to x.
                // *p = 10 because it points to x. 10 +2 = 12
    printf("%d\n",x); //x is now equal to 12
}
