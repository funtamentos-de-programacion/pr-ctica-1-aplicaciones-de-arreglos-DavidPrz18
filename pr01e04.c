#include <stdio.h>

int main() {
    int mat[2][3] = {
        {6, 7, 8},
        {11, 12, 13}
    };

    printf("Direccion de mat: %p\n", (void*)mat); //esta es la dirección de la primera fila 
    printf("Direccion de mat[0]: %p\n", (void*)mat[0]); //esta es la dirección del primer elemento de la primera fila
    printf("Direccion de &mat[0][0]: %p\n", (void*)&mat[0][0]); //esta es la dirección exacta del primer elemento

    return 0;
}
