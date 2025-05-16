#include <stdio.h>

struct Punto {
    int x;
    int y;
};

int main(void) {
    // 1) Inizializzazione di variabili semplici
    int a = 10;                  // a = 10
    float f = 3.5f;              // f = 3.5

    // 2) Array completamente inizializzato
    int arr1[5] = {1, 2, 3, 4, 5};

    // 3) Array parzialmente inizializzato
    int arr2[5] = {1, 2};        // arr2 = {1,2,0,0,0}

    // 4) Dimensione dedotta
    char msg[] = "Ciao";         // msg ha 5+1=5 caratteri compreso '\0'

    // 5) Struttura con designated initializers
    struct Punto p = { .y = 20, .x = 10 }; // ordine esplicito dei campi

    // 6) Stampa dei valori
    printf("a=%d, f=%.1f\n", a, f);
    printf("arr1: ");
    for(int i=0; i<5; i++) printf("%d ", arr1[i]);
    printf("\narr2: ");
    for(int i=0; i<5; i++) printf("%d ", arr2[i]);
    printf("\nmsg: %s\n", msg);
    printf("Punto p: (%d, %d)\n", p.x, p.y);

    return 0;
}
