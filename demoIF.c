#include <stdio.h>
int n = -11;

int main()
{
    if(n>10 && n < 20)
    printf("el numero es mayor a 10, pero menor que 20");
    else if (n == 10)
    printf("el numero es 10");
    else if (n > 20)
    printf("el numero es mayor a 20");
    else if (n<10 && n>=0)
    printf("el numero es menor que 10, pero es 0 a 9");
    else
    printf("error no hay numero positivo");
    return 0;
}