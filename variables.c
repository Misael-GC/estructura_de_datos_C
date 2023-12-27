#include <stdio.h>
//variables decarations
extern int a,b,c;


float f, g, h;

int main()
{
    int a, b, c;
//variables initialization
    g = 1000.9999999;
    f = 1.11111111;

    h = g + f;
    printf("Value of sum is: %d", h);
    return 0;
}
