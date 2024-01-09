#include<stdio.h>

int main()
{
    int n = 30;
    int i;

    for(i=0; i<n; i++){
        continue;
        printf("This is the loop after the continue statement.\n", i);
    }
    printf("el valor actual de i es %d \n", i);
}