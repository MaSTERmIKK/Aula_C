#include <stdio.h>

int main(void) {
    int voto;

    // 1) Chiedo all’utente di inserire un voto da 0 a 100
    printf("Inserisci il voto (0-100): ");
    scanf("%d", &voto);

    // 2) Esecuzione condizionale: se voto >= 60 → passato, altrimenti insufficiente
    if (voto >= 60) {
        printf("Esito: Promosso\n");
    } else {
        printf("Esito: Insufficiente\n");
    }

    // 3) Uso di else if per classificare in fasce
    if (voto < 60) {
        printf("Fascia: Debole\n");
    } else if (voto < 75) {
        printf("Fascia: Sufficiente\n");
    } else if (voto < 90) {
        printf("Fascia: Buono\n");
    } else {
        printf("Fascia: Ottimo\n");
    }

    return 0;
}
