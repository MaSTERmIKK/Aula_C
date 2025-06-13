#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    // Condizione logica: il numero deve essere compreso tra 1 e 100 (inclusi)
    if (numero >= 1 && numero <= 100) {
        printf("Il numero è compreso tra 1 e 100.\n");

        // If annidato: verifica se il numero è pari o dispari
        if (numero % 2 == 0) {
            printf("Il numero è anche pari.\n");
        } else {
            printf("Il numero è invece dispari.\n");
        }
    } else {
        printf("Il numero NON è compreso tra 1 e 100.\n");
    }

    return 0;
}
