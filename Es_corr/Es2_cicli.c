#include <stdio.h>

int main() {
    char risposta;
    int numero, conta_pari = 0;

    do {
        // Richiesta numero
        printf("Inserisci un numero intero: ");
        scanf("%d", &numero);

        // Conta se pari
        if (numero % 2 == 0) {
            conta_pari++;
        }

        // Validazione risposta con while
        printf("Vuoi continuare? (s/n): ");
        scanf(" %c", &risposta); // spazio prima di %c per consumare eventuali \n
        while (risposta != 's' && risposta != 'n') {
            printf("Risposta non valida. Vuoi continuare? (s/n): ");
            scanf(" %c", &risposta);
        }

    } while (risposta == 's');

    printf("Hai inserito %d numeri pari.\n", conta_pari);

    return 0;
}
