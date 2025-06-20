#include <stdio.h>
#include <string.h>

#define MAX_UTENTI 5
#define DIM 20

// Struct Utente con nome e password
typedef struct {
    char nome[DIM];
    char password[DIM];
} Utente;

int main() {
    Utente utenti[MAX_UTENTI]; // Array di utenti
    int num_utenti = 0;

    // Inserimento utenti (qui hardcoded, ma potrebbe essere da input)
    strcpy(utenti[0].nome, "alice");
    strcpy(utenti[0].password, "1234");
    strcpy(utenti[1].nome, "bob");
    strcpy(utenti[1].password, "abcd");
    num_utenti = 2;

    // Login
    char nome_input[DIM], password_input[DIM];
    printf("Inserisci nome utente: ");
    scanf("%s", nome_input);
    printf("Inserisci password: ");
    scanf("%s", password_input);

    int trovato = 0;
    for (int i = 0; i < num_utenti; i++) {
        if (strcmp(nome_input, utenti[i].nome) == 0 &&
            strcmp(password_input, utenti[i].password) == 0) {
            trovato = 1;
            break;
        }
    }

    if (trovato)
        printf("Login riuscito!\n");
    else
        printf("Credenziali errate.\n");

    return 0;
}
