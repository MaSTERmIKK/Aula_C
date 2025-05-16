#include <stdio.h>

int main(void) {
    int n = 5;           // 1) Contatore di iterazioni

    // 2) while: ripete finché n > 0
    while (n > 0) {
        printf("Valore di n: %d\n", n);
        n--;             // 3) Decremento del contatore
    }

    printf("Fine ciclo while\n");
    return 0;
}
