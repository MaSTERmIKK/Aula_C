#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool haPatente = true;
    bool haAssicurazione = false;
    int eta = 20;

    // Uso di && e || 
    if (haPatente && haAssicurazione) {
        printf("Puoi guidare legalmente.\n");
    } else if (haPatente && !haAssicurazione) {
        printf("Hai la patente ma manca l'assicurazione.\n");
    } else if (!haPatente && haAssicurazione) {
        printf("Hai l'assicurazione ma non hai la patente.\n");
    } else {
        printf("Non puoi guidare.\n");
    }

    // Controllo di un intervallo con AND logico
    if (eta >= 18 && eta <= 65) {
        printf("Sei in età lavorativa.\n");
    }

    // Uso di OR logico
    bool weekend = false;
    bool festa = true;
    if (weekend || festa) {
        printf("È giorno di riposo.\n");
    }

    return 0;
}
