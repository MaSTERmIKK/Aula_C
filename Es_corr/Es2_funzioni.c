#include <stdio.h>

// Funzione per inserire i numeri nell'array
void inserisciNumeri(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

// Funzione per calcolare la media
float calcolaMedia(int array[], int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma += array[i];
    }
    return (float)somma / n;
}

// Funzione per contare numeri sopra la media
int contaSopraMedia(int array[], int n, float media) {
    int conteggio = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > media) {
            conteggio++;
        }
    }
    return conteggio;
}

int main() {
    int numeri[50], n, sopraMedia;
    float media;

    // 1. Input quantità
    printf("Quanti numeri vuoi inserire? (max 50): ");
    scanf("%d", &n);

    if (n <= 0 || n > 50) {
        printf("Quantità non valida!\n");
        return 1;
    }

    // 2. Inserimento numeri
    inserisciNumeri(numeri, n);

    // 3. Calcolo media
    media = calcolaMedia(numeri, n);

    // 4. Conta quanti sopra la media
    sopraMedia = contaSopraMedia(numeri, n, media);

    // 5. Output
    printf("La media è: %.2f\n", media);
    printf("Numeri sopra la media: %d\n", sopraMedia);

    return 0;
}
