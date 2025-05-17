#ifndef COUNTER_H
#define COUNTER_H

extern int counter;      // dichiarazione della variabile globale
void incrementa(void);   // dichiarazione della funzione

#endif
--------------------------------------------------------------------------------------------------------

#include "counter.h"

int counter = 0;         // definizione e inizializzazione

void incrementa(void) {
    counter++;
}

--------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include "counter.h"     // include le dichiarazioni extern

int main(void) {
    printf("Counter iniziale: %d\n", counter);
    incrementa();
    printf("Counter dopo incrementa(): %d\n", counter);
    return 0;
}
