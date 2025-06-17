#include <stdio.h>

int main() {
    int numeri[100], n, i, somma = 0;

    // 1. Input quantità
    printf("Quanti numeri vuoi inserire? (max 100): ");
    scanf("%d", &n);

    // Controllo limite massimo
    if (n > 100 || n <= 0) {
        printf("Numero non valido!\n");
        return 1;
    }

    // 2. Inserimento numeri nell'array
    for (i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
        somma += numeri[i]; // Calcolo somma
    }

    // 3. Output somma
    printf("La somma degli elementi è: %d\n", somma);

    return 0;
}
