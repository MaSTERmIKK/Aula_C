#include <stdio.h>

int main(void) {
    int giorno = 3;  // 1) Rappresentazione numerica del giorno (1=Lun, …, 7=Dom)

    printf("Giorno %d: ", giorno);
    switch (giorno) {
        case 1:
            printf("Lunedì\n");
            break;            // 2) Esco dallo switch dopo aver eseguito case 1
        case 2:
            printf("Martedì\n");
            break;
        case 3:
            printf("Mercoledì\n");
            // 3) Nessun break: rientro voluto per mostrare metà settimana
        case 4:
            printf("Giovedì\n");
            break;
        case 5:
            printf("Venerdì\n");
            break;
        case 6:
        case 7:
            // 4) Fall-through per raggruppare Sabato e Domenica
            printf("Weekend!\n");
            break;
        default:
            printf("Giorno non valido\n");
    }

    return 0;
}
