#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool is_even(int x) {
        return (x % 2) == 0;
    }

    int numero = 7;
    if (is_even(numero)) {
        printf("%d è pari\n", numero);
    } else {
        printf("%d è dispari\n", numero);
    }

    // Uso diretto di true/false
    bool flag = false;
    printf("Flag è %s\n", flag ? "vero" : "falso");

    return 0;
}
