#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *p = &a;

    //Pointer Arithmetic
    printf("%d\n",p); // If p is 2002
    printf("%d\n",p+1); // p+1 is 2006! This is because it takes us to the address of the next integer. Therefore, it increments it by 4
    printf("\n");

    printf("Value at address p is %d\n",*p);
    printf("Value at address p+1 is is %d\n",*(p+1)); //Garbage value bc there is nothing there!

    printf("The size of integer is %d bytes\n",sizeof(int)); // an int is 4 bytes!

}
