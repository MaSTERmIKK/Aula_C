#include <stdio.h>

int main(void) {
    int   a = 42;
    float pi = 3.14159f;
    char  c = 'X';
    char  str[] = "Ciao";

    // Stampa di interi con diversi flag e larghezze
    printf("Valore intero base decimale: %d\n", a);
    printf("Intero con padding: [%5d]\n", a);
    printf("Intero allineato a sinistra: [%-5d]\n", a);
    printf("Intero con zero-padding: [%05d]\n\n", a);

    // Stampa di float con precisione variabile
    printf("Pi con due decimali: %.2f\n", pi);
    printf("Pi con quattro decimali: %.4f\n\n", pi);

    // Stampa di char e stringa
    printf("Carattere: %c\n", c);
    printf("Stringa limitata a 3 caratteri: %.3s\n", str);

    // Stampare il simbolo '%' a video
    printf("Percentuale di completamento: 100%%\n");

    return 0;
}
