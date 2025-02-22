#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};

    printf("Direcciones de memoria del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
