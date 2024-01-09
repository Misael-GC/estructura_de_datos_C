#include <stdio.h>
int a,b;

a = 100;
b = 100;

int add(int a, int b);

int main()
{
    printf("The result is: %d\n", add(100, 100));
    return 0;
}

int add(int a, int b){
    int add;
    add = a+b;
   // 
   return add;
}
