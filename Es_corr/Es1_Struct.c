#include <stdio.h>

// 1. Definizione struct
struct Macchina {
    char modello[31]; // 30 caratteri + terminatore
    int anno;
};

int main() {
    struct Macchina lista[50];
    int n, i;

    // 2. Input numero di macchine
    printf("Quante macchine vuoi inserire? (max 50): ");
    scanf("%d", &n);

    if (n <= 0 || n > 50) {
        printf("Numero non valido!\n");
        return 1;
    }

    // 3. Inserimento dati
    for (i = 0; i < n; i++) {
        printf("\nMacchina %d\n", i + 1);
        printf("Modello: ");
        scanf("%30s", lista[i].modello); // senza spazi
        printf("Anno: ");
        scanf("%d", &lista[i].anno);
    }

    // 4. Stampa elenco
    printf("\nElenco delle macchine inserite:\n");
    for (i = 0; i < n; i++) {
        printf("Macchina %d: Modello = %s, Anno = %d\n", i + 1, lista[i].modello, lista[i].anno);
    }

    return 0;
}
