#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 1) Puntatore a intero
    int x = 42;
    int *p = &x;           // p punta a x

    printf("Valore di x tramite p: %d\n", *p); // dereferenziazione

    // 2) Modifica via puntatore
    *p = 100;
    printf("x modificato: %d\n", x);

    // 3) Array e pointer arithmetic
    int *arr = malloc(5 * sizeof *arr);  // allocazione dinamica
    if (!arr) return 1;
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;    // equivalente a *(arr + i) = i*10
    }
    printf("Array dinamico: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // 4) Puntatore a puntatore
    int **pp = &p;
    **pp = 200;            // modifica indiretta di x
    printf("x dopo **pp = %d\n", x);

    free(arr);             // rilascio memoria
    return 0;
}
