#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; // integer
    int *p = &a; // creates pointer to integer, ampersand a = the address of a. P is set to the address of a


    printf("%d\n",p); //shows the address of p
    printf("%d\n",*p); //shows 10 because p shows the value in address a
    printf("%d\n",&a); //This gives the same value as the first statement because we set p to the address of a as shown above
    printf("a = %d\n",a);

    *p = 12; // dereferencing
    printf("a = %d\n",a);


    int b = 20;
    *p = b; //Will the address in p change to point b?
            // NO IT WILL NOT. All we are doing is putting in the address of a to the value that b has
    printf("Address of p is %d\n",p);
    printf("Value at p is %d\n",*p); // NOW is 20, because value in A is set to 20, (p points to address A)
    printf("a = %d\n",a);            // NOW is 20, because value in A is set to 20


}
