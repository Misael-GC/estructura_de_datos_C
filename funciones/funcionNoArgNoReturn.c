#include <stdio.h>
int a,b;

a = 100;
b = 100;

void add(int a, int b);

int main()
{
    add(100, 100);

    return 0;
}

void add(int a, int b){
    int add;
    add = a+b;
    printf("The result is: %d\n", add);
}
