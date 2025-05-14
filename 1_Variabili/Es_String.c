#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];              // buffer per la stringa
    printf("Come ti chiami? ");
    if (fgets(nome, sizeof(nome), stdin) != NULL) {
        // rimuovo l'eventuale newline finale
        nome[strcspn(nome, "\n")] = '\0';

        // calcolo la lunghezza
        size_t len = strlen(nome);

        // preparo un saluto concatenando due stringhe
        char saluto[100] = "Ciao, ";
        strncat(saluto, nome, sizeof(saluto) - strlen(saluto) - 1);

        printf("%s! Il tuo nome contiene %zu caratteri.\n", saluto, len);
    } else {
        printf("Errore nella lettura del nome.\n");
    }

    return 0;
}
