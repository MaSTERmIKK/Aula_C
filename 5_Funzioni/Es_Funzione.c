#include <stdio.h>

// Prototipo: dichiara la funzione prima di main
int massimo(int a, int b);

// Definizione: implementa il comportamento
int massimo(int a, int b) {
    if (a > b) {
        return a;    // restituisce il valore più grande
    } else {
        return b;
    }
}

int main(void) {
    int x = 7, y = 12;

    // Chiamata: i valori di x e y vengono copiati in a e b
    int m = massimo(x, y);

    printf("Il massimo tra %d e %d è %d\n", x, y, m);

    return 0;
}
