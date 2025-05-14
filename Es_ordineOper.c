#include <stdio.h>

int main(void) {
    int a = 2, b = 3, c = 4;
    int result1, result2, result3;

    // 1) Senza parentesi: * ha precedenza su + e -
    result1 = a + b * c;        // equivale a a + (b * c) = 2 + 12 = 14

    // 2) Override con parentesi
    result2 = (a + b) * c;      // (2 + 3) * 4 = 20

    // 3) Associazione di assegnamenti (right-to-left)
    a = b = c + 1;              // equivale a b = (c + 1); a = b; => b = 5, a = 5

    // 4) Combinazione di operatori logici e di confronto
    result3 = (a > b) && (b < c) || (c == 4);
    // valutazione step by step:
    //   (a > b) -> (5 > 5) = false
    //   (b < c) -> (5 < 4) = false
    //   false && false = false
    //   (c == 4) -> true
    //   false || true = true => result3 = 1

    // Stampa dei risultati
    printf("result1 (a + b * c) = %d\n", result1);
    printf("result2 ((a + b) * c) = %d\n", result2);
    printf("after a = b = c + 1: a = %d, b = %d\n", a, b);
    printf("result3 = %d (true = 1, false = 0)\n", result3);

    return 0;
}
