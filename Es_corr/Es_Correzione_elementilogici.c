#include <stdio.h>

int main() {
    int num1, num2, num3, X;
    int somma, moltiplicazione;

    // Input dei tre numeri
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    printf("Inserisci il terzo numero intero: ");
    scanf("%d", &num3);

    // Input della soglia X
    printf("Inserisci il valore della soglia X: ");
    scanf("%d", &X);

    // Calcolo delle operazioni
    somma = num1 + num2;
    moltiplicazione = num2 * num3;

    printf("La somma di num1 e num2 è: %d\n", somma);
    printf("La moltiplicazione di num2 e num3 è: %d\n", moltiplicazione);

    // Verifica rispetto a X
    if(somma > X) {
        printf("La somma è maggiore di X.\n");
    } else {
        printf("La somma NON è maggiore di X.\n");
    }

    if(moltiplicazione < X) {
        printf("La moltiplicazione è minore di X.\n");
    } else {
        printf("La moltiplicazione NON è minore di X.\n");
    }

    // --- OPERATORI LOGICI ---
    // Almeno uno dei numeri è negativo (OR)
    if(num1 < 0 || num2 < 0 || num3 < 0) {
        printf("Almeno uno dei numeri è negativo.\n");
    } else {
        printf("Nessun numero è negativo.\n");
    }

    // Tutti e tre i numeri sono diversi da zero (AND)
    if(num1 != 0 && num2 != 0 && num3 != 0) {
        printf("Tutti i numeri sono diversi da zero.\n");
    } else {
        printf("Almeno uno dei numeri è zero.\n");
    }

    // Nessuno dei numeri è uguale a 100 (NOT combinato con OR)
    if(!(num1 == 100 || num2 == 100 || num3 == 100)) {
        printf("Nessuno dei numeri è uguale a 100.\n");
    } else {
        printf("Almeno uno dei numeri è uguale a 100.\n");
    }

    return 0;
}
