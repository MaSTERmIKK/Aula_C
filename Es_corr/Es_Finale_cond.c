#include <stdio.h>
#include <string.h>

int main() {
    char ruolo[20];
    int opzione;
    int azione = 0; // Variabile segreta di esempio

    // Input ruolo
    printf("Inserisci il tuo ruolo (studente/docente/ospite): ");
    scanf("%s", ruolo);

    // Input opzione menu
    printf("Scegli un'opzione (1=Visualizza, 2=Modifica, 3=Esci, 99=Scelta segreta): ");
    scanf("%d", &opzione);

    // Studente: solo qui può visualizzare o modificare
    if (strcmp(ruolo, "studente") == 0 && (opzione == 1 || opzione == 2)) {
        switch(opzione) {
            case 1:
                printf("Studente - Visualizzazione materiali\n");
                azione = 10; // esempio di variabile segreta
                break;
            case 2:
                printf("Studente - Modifica note personali\n");
                azione = 20;
                break;
        }
    }
    // Docente: solo qui può modificare
    else if (strcmp(ruolo, "docente") == 0 && (opzione == 1 || opzione == 2)) {
        switch(opzione) {
            case 1:
                printf("Docente - Visualizza registro classe\n");
                azione = 30;
                break;
            case 2:
                printf("Docente - Modifica corsi\n");
                azione = 40;
                break;
        }
    }
    // Ospite
    else if (strcmp(ruolo, "ospite") == 0) {
        printf("Area informativa\n");
        azione = 50;
    }
    // Scelta segreta
    else if (opzione == 99) {
        printf("Hai trovato la scelta segreta!\n");
        azione = 99;
    }
    // Altri casi
    else {
        printf("Opzione non disponibile\n");
        azione = -1;
    }

    // Messaggio finale con il valore della variabile segreta (opzionale)
    printf("Valore della variabile segreta: %d\n", azione);

    return 0;
}
