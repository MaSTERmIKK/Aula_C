#include <stdio.h>
#include <string.h>

// 1) Definizione di una struct per rappresentare un libro
typedef struct {
    char titolo[50];
    char autore[30];
    int  anno_pubblicazione;
    float prezzo;
} Libro;

// 2) Funzione che stampa i dati di un Libro passato per puntatore
void stampa_libro(const Libro *l) {
    printf("Titolo : %s\n", l->titolo);
    printf("Autore : %s\n", l->autore);
    printf("Anno   : %d\n", l->anno_pubblicazione);
    printf("Prezzo : %.2f EUR\n", l->prezzo);
}

int main(void) {
    // 3) Inizializzazione posizionale
    Libro l1 = { 
        "Il Nome della Rosa", 
        "Umberto Eco", 
        1980, 
        12.50f 
    };

    // 4) Inizializzazione con designated initializers
    Libro l2 = { 
        .autore = "J.R.R. Tolkien",
        .titolo = "Lo Hobbit",
        .prezzo = 15.00f,
        .anno_pubblicazione = 1937
    };

    // 5) Array di struct
    Libro biblioteca[2];
    biblioteca[0] = l1;
    biblioteca[1] = l2;

    // 6) Stampa dei libri
    for (int i = 0; i < 2; i++) {
        printf("\n--- Libro %d ---\n", i+1);
        stampa_libro(&biblioteca[i]);  // passo per puntatore per evitare copia
    }

    return 0;
}
