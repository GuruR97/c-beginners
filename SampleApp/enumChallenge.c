#include <stdio.h>

int main()
{
    enum Company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

    enum Company Company1 = Xerox;
    enum Company Company2 = Google;
    enum Company Company3 = Ebay;

    printf("Company indices for Xerox Google and Ebay are respectively:\n %d\n %d\n %d\n ", Xerox, Google, Ebay);

    return 0;


}
