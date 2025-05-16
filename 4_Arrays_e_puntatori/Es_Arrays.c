#include <stdio.h>

int main(void) {
    // 1) Dichiarazione e inizializzazione di un array di interi
    int v[5] = {10, 20, 30, 40, 50};

    // 2) Calcolo della dimensione (numero di elementi)
    size_t n = sizeof(v) / sizeof(v[0]);

    // 3) Accesso e stampa di tutti gli elementi
    printf("Contenuto dell'array:\n");
    for (size_t i = 0; i < n; i++) {
        printf("v[%zu] = %d\n", i, v[i]);
    }

    // 4) Modifica di un elemento
    v[2] = 99;  // cambia il terzo elemento (precedentemente 30) in 99

    // 5) Uso di memcpy per copiare l'array in uno nuovo
    int copia[5];
    memcpy(copia, v, sizeof(v)); // include <string.h> per memcpy

    printf("\nArray dopo modifica e copia:\n");
    for (size_t i = 0; i < n; i++) {
        printf("copia[%zu] = %d\n", i, copia[i]);
    }

    return 0;
}
