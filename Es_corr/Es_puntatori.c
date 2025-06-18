#include <stdio.h>

int main() {
    int a, b, temp;
    int *pa, *pb;

    // 1. Inserimento valori
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    // 2. Puntatori
    pa = &a;
    pb = &b;

    // 3. Stampa valori prima dello scambio
    printf("Prima dello scambio: a = %d, b = %d\n", a, b);

    // Scambio valori tramite puntatori
    temp = *pa;
    *pa = *pb;
    *pb = temp;

    // 4. Stampa valori dopo lo scambio
    printf("Dopo lo scambio: a = %d, b = %d\n", a, b);

    // 5. Calcola la somma usando i puntatori
    int somma = *pa + *pb;
    printf("La somma dei due numeri (dopo lo scambio) è: %d\n", somma);

    // 6. Determina il maggiore usando i puntatori
    if (*pa > *pb) {
        printf("Il maggiore è: %d\n", *pa);
    } else if (*pa < *pb) {
        printf("Il maggiore è: %d\n", *pb);
    } else {
        printf("I numeri sono uguali.\n");
    }

    return 0;
}
