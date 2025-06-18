#include <stdio.h>

int main() {
    int numeri[50], n, i, valore, contatore = 0;

    // 1. Input quantità
    printf("Quanti numeri vuoi inserire? (max 50): ");
    scanf("%d", &n);

    // Controllo validità quantità
    if (n > 50 || n <= 0) {
        printf("Numero non valido!\n");
        return 1;
    }

    // 2. Inserimento valori nell'array
    for (i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // 3. Scelta valore da cercare
    printf("Inserisci il valore da cercare: ");
    scanf("%d", &valore);

    // 4. Conta quante volte appare il valore
    for (i = 0; i < n; i++) {
        if (numeri[i] == valore) {
            contatore++;
        }
    }

    // 5. Output risultato
    printf("Il valore %d appare %d volte nell'array.\n", valore, contatore);

    return 0;
}
