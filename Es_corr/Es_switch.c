#include <stdio.h>
#include <string.h>

int main() {
    char giorno[15];
    int numero = 0;

    printf("Inserisci il giorno della settimana (in minuscolo): ");
    scanf("%14s", giorno);

    // Conversione parola in numero
    if (strcmp(giorno, "lunedi") == 0 || strcmp(giorno, "lunedì") == 0)
        numero = 1;
    else if (strcmp(giorno, "martedi") == 0 || strcmp(giorno, "martedì") == 0)
        numero = 2;
    else if (strcmp(giorno, "mercoledi") == 0 || strcmp(giorno, "mercoledì") == 0)
        numero = 3;
    else if (strcmp(giorno, "giovedi") == 0 || strcmp(giorno, "giovedì") == 0)
        numero = 4;
    else if (strcmp(giorno, "venerdi") == 0 || strcmp(giorno, "venerdì") == 0)
        numero = 5;
    else if (strcmp(giorno, "sabato") == 0)
        numero = 6;
    else if (strcmp(giorno, "domenica") == 0)
        numero = 7;
    else
        numero = 0;

    // Switch sul numero ricavato
    switch (numero) {
        case 1:
            printf("1 = Lunedì\n");
            break;
        case 2:
            printf("2 = Martedì\n");
            break;
        case 3:
            printf("3 = Mercoledì\n");
            break;
        case 4:
            printf("4 = Giovedì\n");
            break;
        case 5:
            printf("5 = Venerdì\n");
            break;
        case 6:
            printf("6 = Sabato\n");
            break;
        case 7:
            printf("7 = Domenica\n");
            break;
        default:
            printf("Errore: giorno non valido!\n");
            break;
    }

    return 0;
}
