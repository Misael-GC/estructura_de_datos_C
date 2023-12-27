#include <stdio.h>

#define PIZZASCOST 1.5
const char NEWLINE = '\n';

int main(){
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZZASCOST * numberOfSlices;
    printf("tOTAL BILL: %F: ", costoPizzas);
    printf("%c", NEWLINE);
}

