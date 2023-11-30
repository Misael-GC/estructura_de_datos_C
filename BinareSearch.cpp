#include <iostream>
using namespace std;

int binarySearchRecursive(int array[], int left, int right, int objetive)
{
    if(right >= left){
        int mid = left + (right - left) / 2;
        if (array[mid] == objetive){
            return mid;
        }
        if (array[mid] > objetive) {
            return binarySearchRecursive(array, left, mid-1, objetive);
    }
    return binarySearchRecursive(array, mid + 1, right, objetive);
    }
    return -1;
}

/*funcion para imprimir el array*/

void printArray(int array[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if (i != size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

/**/


int main(){
    int array[] = {1,5,10, 43, 101, 290};
    int objetive = 101;
    int sizeArray = 6; //sizeof(array) / sizeof(array[0])

    printArray(array, sizeArray);

    int result = binarySearchRecursive(array, 0, sizeArray-1, objetive);
    if(result == -1 ){
        cout << "No se encontro el elemento"<<endl;
    }else{
        cout << "Se encontro el elemento en la posicion: "<< result << endl;
        cout << "Se encontro el Objetivo: "<<  objetive << endl;
    }
}
