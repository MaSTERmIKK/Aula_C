#include <stdio.h>

int main(void) {
    int    age;
    float  weight;
    char   name[20];

    // 1) Lettura di un intero
    printf("Inserisci la tua età: ");
    if (scanf("%d", &age) != 1) {
        printf("Input non valido per l'età.\n");
        return 1;
    }

    // 2) Lettura di un float
    printf("Inserisci il tuo peso (es. 70.5): ");
    if (scanf("%f", &weight) != 1) {
        printf("Input non valido per il peso.\n");
        return 1;
    }

    // 3) Lettura di una stringa con limite
    printf("Inserisci il tuo nome: ");
    if (scanf("%19s", name) != 1) {  // %19s per evitare overflow
        printf("Input non valido per il nome.\n");
        return 1;
    }

    // 4) Stampa dei dati letti
    printf("\nDati inseriti:\n");
    printf("Età   : %d anni\n", age);
    printf("Peso  : %.2f kg\n", weight);
    printf("Nome  : %s\n", name);

    return 0;
}
