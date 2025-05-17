#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // 1) Stampo nome del programma
    printf("Programma: %s\n", argv[0]);

    // 2) Controllo se sono stati passati argomenti
    if (argc == 1) {
        printf("Nessun argomento specificato.\n");
    } else {
        printf("Argomenti (argc = %d):\n", argc);
        for (int i = 1; i < argc; i++) {
            printf("  argv[%d] = %s\n", i, argv[i]);
        }
    }

    // 3) Esempio di riconoscimento di un flag
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printf("Uso: %s [opzioni]\n", argv[0]);
            printf("  -h, --help     Visualizza questo aiuto\n");
        }
    }

    return 0;  // 4) Codice di uscita 0 = successo
}
