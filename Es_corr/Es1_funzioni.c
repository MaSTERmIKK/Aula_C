#include <stdio.h>

// Funzione per il quadrato
int quadrato(int n) {
    return n * n;
}

// Funzione per il massimo tra due numeri
int massimo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    int quad1, quad2, max;

    // Input utente
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    // Calcola il quadrato di ciascun numero
    quad1 = quadrato(num1);
    quad2 = quadrato(num2);

    // Trova il maggiore
    max = massimo(num1, num2);

    // Output dei risultati
    printf("Il quadrato di %d è: %d\n", num1, quad1);
    printf("Il quadrato di %d è: %d\n", num2, quad2);
    printf("Il maggiore tra %d e %d è: %d\n", num1, num2, max);

    return 0;
}
