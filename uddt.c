#include "stdlib.h"
#include <stdio.h>
#include "string.h"
#include "math.h"
struct client
{
    char Name[50];
    char Id[10];
    float Credit;
    char Addres[100];
};

main(int argc, char const *argv[])
{
    struct client client1 = {0};
    strcpy(client1.Name, "Camilo Valencia");
    strcpy(client1.Id, "0000000001");
    client1.Credit = 1000000;
    strcpy(client1.Addres,"Av. Bolivar Nro. 23456789");
    printf("Nombre: %s\n", client1.Name);
    printf("ID: %s\n", client1.Id);
    printf("Crédito: %.2f\n", client1.Credit);
    printf("Dirección: %s\n", client1.Addres);
    return 0;
}