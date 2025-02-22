#include <stdio.h>

int main() {
    int arr[3] = {7, 8, 9};

    printf("Direccion de arr: %p\n", (void*)arr); // esta es la dirección de memoria del primer elemento del arreglo
    printf("Direccion de &arr[0]: %p\n", (void*)&arr[0]); // esta es la dirección de memoria del primer elemento del arreglo

    return 0;
}
