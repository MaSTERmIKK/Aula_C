#include <stdio.h>

int main(void) {
    int scelta;

    // 1) Menu che si ripete almeno una volta
    do {
        printf("Menu:\n");
        printf("1. Saluta\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        if (scelta == 1) {
            printf("Ciao!\n");
        }
    } while (scelta != 0);  // 2) Continua finché l’utente non inserisce 0

    printf("Fine programma\n");
    return 0;
}
