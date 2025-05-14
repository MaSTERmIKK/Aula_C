#include <stdio.h>
#include <ctype.h>   // per isupper, tolower

int main(void) {
    char c;
    printf("Inserisci un carattere: ");
    c = getchar();             // legge un singolo carattere da stdin

    if (isupper((unsigned char)c)) {
        // se è una lettera maiuscola, la converto in minuscola
        char lower = tolower((unsigned char)c);
        printf("Hai inserito una maiuscola. In minuscolo diventa: %c\n", lower);
    } else if (islower((unsigned char)c)) {
        // se è una lettera minuscola, la converto in maiuscola
        char upper = toupper((unsigned char)c);
        printf("Hai inserito una minuscola. In maiuscolo diventa: %c\n", upper);
    } else {
        printf("Il carattere '%c' non è una lettera alfabetica.\n", c);
    }

    return 0;
}
