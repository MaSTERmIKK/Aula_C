#include <stdio.h>

// Definizione della struct Persona
struct Persona {
    char nome[20];
    int eta;
    char sesso;
};

int main() {
    // Creazione di una variabile di tipo struct Persona
    struct Persona p1;

    // Assegnazione dei valori ai campi della struct
    printf("Inserisci il nome: ");
    scanf("%19s", p1.nome);

    printf("Inserisci l'età: ");
    scanf("%d", &p1.eta);

    printf("Inserisci il sesso (M/F): ");
    scanf(" %c", &p1.sesso);

    // Stampa delle informazioni inserite
    printf("Nome: %s, Età: %d, Sesso: %c\n", p1.nome, p1.eta, p1.sesso);

    return 0;
}
