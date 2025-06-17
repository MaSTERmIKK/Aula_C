#include <stdio.h>

int main() {
    int numero, somma = 0;

    printf("Inserisci numeri positivi da sommare (0 per terminare):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > 0) {
            somma += numero;
        }
        scanf("%d", &numero);
    }

    printf("La somma dei numeri positivi inseriti è: %d\n", somma);

    return 0;
}
