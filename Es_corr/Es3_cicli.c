#include <stdio.h>

int main() {
    int n, i, numero, conta_dispari = 0;

    // 1. Input numero di valori da inserire
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    // 2. Ciclo for per chiedere n numeri
    for (i = 0; i < n; i++) {
        // 3. Validazione con while
        printf("Inserisci un numero tra 10 e 100: ");
        scanf("%d", &numero);

        while (numero < 10 || numero > 100) {
            printf("Numero non valido! Inserisci un numero tra 10 e 100: ");
            scanf("%d", &numero);
        }

        // 4. Controllo se dispari
        if (numero % 2 != 0) {
            conta_dispari++;
        }
    }

    // 5. Stampa risultato
    printf("Hai inserito %d numeri dispari.\n", conta_dispari);

    return 0;
}
