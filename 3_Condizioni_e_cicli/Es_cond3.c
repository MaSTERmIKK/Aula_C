#include <stdio.h>
#include <string.h> // Serve per strcmp

int main() {
    char password[20];

    printf("Inserisci la password: ");
    scanf("%19s", password);

    if (strcmp(password, "segreto") == 0) {
        printf("Accesso consentito.\n");
    } else {
        printf("Accesso negato.\n");
    }

    return 0;
}
