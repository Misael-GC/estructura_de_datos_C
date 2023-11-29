//1-Comenzamos a hacer la comparación de elementos adyacentes
//2- repetimos hasta tener una pasada completa sin ningún swap
//3 funciones, la 1ra va hacer el cambio de posición los numeros, 2da va ayudar hacer el recorrido del array, comparativas va a ordenar, 3ra va imprimir
#include<stdio.h>

void cambiar_posicion(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)        //bucle para recorrer el array, es n-1 por el limite del arr iniciamos en 0 hasta 5, pero 5 - 1 = 4
    {
        for(j=0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1]) //orden ascendente (arr[j] > arr[j+1])
            {
                cambiar_posicion(&arr[j], &arr[j+1]);
            }
        }
    }
}

int print_array(int arr[], int n)
{
    int i;
    for(i=0; i<n ; i++) //orden ascendente  -> (i=0; i<n ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n fin del ordenamiento");
}

main(int argc, char const *argv[])
{
    int arr[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    print_array(arr, n);
    printf("Ordenado: \n");
}
//array de numeros a ordenar -> S
//Numero de datos que va a contener el array -> N

//gcc bubbleSort.c -o bubbleSort.exe
// ./bubbleSort.exe
//reto hacerlo alrevez
