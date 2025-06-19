#include <stdio.h>
#include <string.h>

// 1. Definizione struct
struct Contatto {
    char nome[31];
    char telefono[16];
};

int main() {
    struct Contatto rubrica[20];
    int n, i, trovato = 0;
    char cerca_nome[31];

    // 2. Quanti contatti
    printf("Quanti contatti vuoi inserire? (max 20): ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Numero non valido!\n");
        return 1;
    }

    // 3. Inserimento dati
    for (i = 0; i < n; i++) {
        printf("\nContatto %d\n", i + 1);
        printf("Nome: ");
        scanf("%30s", rubrica[i].nome);
        printf("Telefono: ");
        scanf("%15s", rubrica[i].telefono);
    }

    // 4. Cerca un nome nella rubrica
    printf("\nInserisci il nome da cercare: ");
    scanf("%30s", cerca_nome);

    for (i = 0; i < n; i++) {
        if (strcmp(rubrica[i].nome, cerca_nome) == 0) {
            printf("Telefono di %s: %s\n", rubrica[i].nome, rubrica[i].telefono);
            trovato = 1;
            break;
        }
    }

    if (!trovato) {
        printf("Contatto non trovato.\n");
    }

    return 0;
}
