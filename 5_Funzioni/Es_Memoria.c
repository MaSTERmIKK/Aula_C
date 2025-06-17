#include <stdio.h>
#include <stdlib.h>   // per malloc, calloc, realloc, free

int main(void) {
    size_t n = 5;

    // 1) Alloco dinamicamente un array di n interi
    int *arr = malloc(n * sizeof *arr);
    if (arr == NULL) {                     // 2) Controllo di errore
        fprintf(stderr, "malloc fallita\n");
        return EXIT_FAILURE;
    }

    // 3) Inizializzo l'array
    for (size_t i = 0; i < n; i++) {
        arr[i] = (int)(i + 1) * 10;        // es. 10, 20, 30, ...
    }

    // 4) Uso dell'array
    printf("Array iniziale:\n");
    for (size_t i = 0; i < n; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // 5) Ridimensionamento: duplico la capacità
    size_t new_n = n * 2;
    int *tmp = realloc(arr, new_n * sizeof *arr);
    if (tmp == NULL) {                     // 6) Controllo di errore su realloc
        fprintf(stderr, "realloc fallita\n");
        free(arr);                         // libero la vecchia memoria
        return EXIT_FAILURE;
    }
    arr = tmp;                             // aggiorno il puntatore

    // 7) Inizializzo la seconda metà dell'array
    for (size_t i = n; i < new_n; i++) {
        arr[i] = (int)(i + 1) * 10;
    }

    // 8) Stampa dopo realloc
    printf("\nArray dopo realloc a %zu elementi:\n", new_n);
    for (size_t i = 0; i < new_n; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // 9) Dealloco la memoria
    free(arr);
    arr = NULL;                            // 10) Prevengo dangling pointer

    return EXIT_SUCCESS;
}
