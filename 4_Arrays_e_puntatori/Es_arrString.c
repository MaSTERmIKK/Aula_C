#include <stdio.h>

int main() {
    // Definisce un array di 3 stringhe, ognuna lunga massimo 19 caratteri (+1 per '\0')
    char nomi[3][20];

    // Inserimento dei nomi
    for (int i = 0; i < 3; i++) {
        printf("Inserisci il nome %d: ", i + 1);
        scanf("%19s", nomi[i]); // Legge una stringa (nome) e la salva nell'array
    }

    // Stampa dei nomi inseriti
    printf("Hai inserito questi nomi:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", nomi[i]);
    }

    return 0;
}
