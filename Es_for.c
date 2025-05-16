#include <stdio.h>

int main(void) {
    // 1) Stampa i primi 10 numeri naturali
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);   // 2) Corpo del ciclo
    }
    printf("\n");

    // 3) Iterazione con passo diverso
    for (int j = 10; j > 0; j -= 2) {
        printf("%d ", j);   // stampa 10, 8, 6, 4, 2
    }
    printf("\n");

    return 0;
}
