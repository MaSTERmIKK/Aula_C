#include <stdio.h>

int main(void) {
    // 1) Dichiarazione e inizializzazione di variabili intere
    int a = 10;           // variabile 'a' di tipo int, inizializzata a 10
    unsigned int b = 20;  // variabile 'b' senza segno, inizializzata a 20

    // 2) Dichiarazione di un char e di un float senza inizializzazione
    char c;               
    float f;

    // 3) Assegnazione di valori successiva alla dichiarazione
    c = 'Z';              // variabile char che contiene il carattere 'Z'
    f = 3.14f;            // variabile float che contiene approssimazione di π

    // 4) Utilizzo delle variabili in un’operazione
    int somma = a + b;    // sommo a e b, risultato in 'somma'

    // 5) Stampa dei valori
    printf("a = %d, b = %u\n", a, b);
    printf("c = %c, f = %.2f\n", c, f);
    printf("somma = %d\n", somma);

    return 0;             // fine del programma
}
