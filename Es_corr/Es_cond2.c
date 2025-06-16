#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    // Prima casistica: positivo e pari
    if (numero > 0 && numero % 2 == 0) {
        printf("Il numero è positivo e pari.\n");
        // If annidato
        if (numero > 50) {
            printf("Molto grande!\n");
        }
    }
    // Seconda casistica: negativo o maggiore di 100
    else if (numero < 0 || numero > 100) {
        printf("Il numero è negativo oppure è maggiore di 100.\n");
        // If annidato
        if (numero % 5 == 0) {
            printf("Multiplo di 5!\n");
        }
    }
    // Terza casistica: nessuna delle precedenti
    else {
        printf("Il numero non soddisfa nessuna delle condizioni precedenti.\n");
        // If annidato
        if (numero != 0) {
            printf("Numero diverso da zero.\n");
        }
    }

    return 0;
}
