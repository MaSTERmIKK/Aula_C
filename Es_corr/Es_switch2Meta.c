#include <stdio.h>
#include <string.h>

int main() {
    char ruolo[20];
    int opzione;

    // Input ruolo
    printf("Inserisci il tuo ruolo (studente/docente/ospite): ");
    scanf("%s", ruolo);

    // Input opzione menu
    printf("Scegli un'opzione (1=Visualizza, 2=Modifica, 3=Esci): ");
    scanf("%d", &opzione);

    // Controlli logici e condizionali
    if (strcmp(ruolo, "studente") == 0 && (opzione == 1 || opzione == 2)) {
        printf("Accesso a materiali didattici\n");
    } else if (strcmp(ruolo, "docente") == 0 && opzione == 2) {
        printf("Accesso alla gestione corsi\n");
    } else if (strcmp(ruolo, "ospite") == 0) {
        printf("Area informativa\n");
    } else {
        printf("Opzione non disponibile\n");
    }

    // Switch sull'opzione scelta
    switch (opzione) {
        case 1:
            printf("Hai scelto: Visualizza\n");
            break;
        case 2:
            printf("Hai scelto: Modifica\n");
            break;
        case 3:
            printf("Hai scelto: Esci\n");
            break;
        default:
            printf("Opzione di menu non valida\n");
            break;
    }

    return 0;
}
