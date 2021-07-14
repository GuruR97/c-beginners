#include <stdio.h>

int main()
{
    double width = 2;
    double length = 3;
    double perimeter = 2*(length+width);
    double area = length*width;

    printf("The length is %lf\n", length);
    printf("The width is %lf\n", width);
    printf("The perimeter is %lf\n", perimeter);
    printf("The area is %lf\n", area);

    return 0;
}
