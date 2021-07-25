#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {4,1,2,3,4};
    int *p;
    p = a; // This auto points to the first element in the array, the same as saying p=&a[0]

    printf("%d\n",p); //prints out the address of a, which is equal to the address of p
    printf("%d\n",*p); //prints out 4
    printf("%d\n",&a[0]); //prints out the address of a, which is equal to the address of p
    printf("%d\n",*(p+1)); // prints out 1, one value after the first element
    printf("%d\n",a); // This prints out the address of a
    printf("%d\n",a+1); // This prints out the address of 4 bytes up from a
    printf("\n");

    for (int i=0; i<5; i++)
    {
        printf("Address = %d\n",&a[i]);
        printf("Address = %d\n",a+i);

        printf("value = %d\n",a[i]);
        printf("value = %d\n",*(a+i));
    }




}
