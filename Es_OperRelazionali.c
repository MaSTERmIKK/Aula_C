#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 10, b = 20;

    printf("a = %d, b = %d\n", a, b);

    // Esempi di confronto
    printf("a == b --> %s\n", (a == b) ? "vero" : "falso");
    printf("a != b --> %s\n", (a != b) ? "vero" : "falso");
    printf("a < b  --> %s\n", (a < b)  ? "vero" : "falso");
    printf("a > b  --> %s\n", (a > b)  ? "vero" : "falso");
    printf("a <= b --> %s\n", (a <= b) ? "vero" : "falso");
    printf("a >= b --> %s\n", (a >= b) ? "vero" : "falso");

    // Uso in un if
    if (a < b) {
        puts("a è minore di b");
    } else {
        puts("a non è minore di b");
    }

    return 0;
}
