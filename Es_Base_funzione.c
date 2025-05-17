#include <stdio.h>

// 1) Dichiarazione (prototipo) della funzione prima di main
int somma(int a, int b);

int main(void) {
    int x = 5, y = 7;

    // 2) Invocazione della funzione: passo x e y come argomenti
    int risultato = somma(x, y);

    printf("La somma di %d e %d è %d\n", x, y, risultato);
    return 0;
}

// 3) Definizione della funzione: implementazione del comportamento
int somma(int a, int b) {
    int s = a + b;    // calcolo della somma
    return s;         // restituisco il risultato
}
