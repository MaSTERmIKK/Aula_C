#include <stdio.h>

int main(void) {
    int x = 5;           // assegnamento semplice
    printf("x = %d\n", x);

    x += 3;              // equivalente a x = x + 3
    printf("dopo x += 3 --> x = %d\n", x);

    x *= 2;              // equivalente a x = x * 2
    printf("dopo x *= 2 --> x = %d\n", x);

    x %= 4;              // equivalente a x = x % 4
    printf("dopo x %%= 4 --> x = %d\n", x);

    x <<= 1;             // shift a sinistra e assegnamento: x = x << 1
    printf("dopo x <<= 1 --> x = %d\n", x);

    // Catena di assegnamenti, associatività da destra
    int a, b, c = 7;
    a = b = c;           // prima b = c (b diventa 7), poi a = b (a diventa 7)
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
