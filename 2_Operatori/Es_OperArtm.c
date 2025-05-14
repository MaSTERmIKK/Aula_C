#include <stdio.h>

int main(void) {
    int a = 10, b = 3;
    float x = 10.0f, y = 3.0f;

    // Operazioni intere
    int sum      = a + b;      // somma: 13
    int diff     = a - b;      // sottrazione: 7
    int prod     = a * b;      // moltiplicazione: 30
    int quot     = a / b;      // divisione intera: 3 (troncamento)
    int mod      = a % b;      // modulo: 1

    // Operazioni floating-point
    float fquot  = x / y;      // divisione reale: circa 3.333333

    // Incremento e decremento
    int pre_inc  = ++a;        // a diventa 11, poi assegnato a pre_inc
    int post_inc = b++;        // post_inc = 3, poi b diventa 4

    // Stampa dei risultati
    printf("Interi: %d + %d = %d\n", 10, 3, sum);
    printf("Interi: %d - %d = %d\n", 10, 3, diff);
    printf("Interi: %d * %d = %d\n", 10, 3, prod);
    printf("Interi: %d / %d = %d (troncato)\n", 10, 3, quot);
    printf("Interi: %d %% %d = %d (resto)\n", 10, 3, mod);
    printf("Float: %.6f / %.6f = %.6f\n", x, y, fquot);
    printf("Pre-incremento: ++10 = %d\n", pre_inc);
    printf("Post-incremento: 3++ = %d (b ora = %d)\n", post_inc, b);

    return 0;
}
