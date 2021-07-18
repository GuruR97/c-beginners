#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1025;
    int *p = &a;
    p = &a;

    printf("size of integer is %d\n", sizeof(int));
    printf("Address of p = %d, value is %d\n",p,*p);
    printf("Address of p + 1 = %d, value is %d\n",p+1,*(p+1));
    // 1025 = 00000000 00000000 00000100 00000001
    // It moves up 4 bytes, to -13328 from -13332. The value goes from to garbage from 1025.

    char *p0;
    p0 = (char*)p; //This is typecasting, trying to store the address of p in p0
    printf("size of char is %d bytes\n",sizeof(char));
    printf("Address of p0 is  = %d, value is %d\n",p0,*p0);
    // 1025 = 00000000 00000000 00000100 00000001
    printf("Address of p0 is  = %d, value is %d\n",p0+1,*(p0+1));
    //Because it's a character, it only moves up 1 byte. This is why the values are -13331 and 4 respectively from -13332 and 1.

    void *p1;
    p1 = p;
    //printf("Address of p1 is  = %d, value is %d\n",p1,*p1);
    //Because this pointer type is not mapped to a data type, this will not give an error. However, it we cannot dereference it.
    //We can only print the address
    printf("Address of p1 is  = %d\n",p1);


}
