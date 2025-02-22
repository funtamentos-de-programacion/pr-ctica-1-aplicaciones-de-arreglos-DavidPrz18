#include <stdio.h>

int main() {
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Direcciones de memoria de la matriz:\n");
    for (int i = 0; i < 2; i++) { // se usa este for para ir recorriendo las filas una a una
        for (int j = 0; j < 3; j++) { //este otro for se usa para recorrer las columnas una a una 
            printf("mat[%d][%d]: %p\n", i, j, (void*)&mat[i][j]); //imprimimos las direcciones de cada elemento del arreglo 
        }
    }

    return 0;
}
