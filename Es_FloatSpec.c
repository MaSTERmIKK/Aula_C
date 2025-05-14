#include <stdio.h>
#include <float.h>    // Per i limiti di precisione e range

int main(void) {
    // 1) Dichiarazione e inizializzazione con letterali decimali
    float   f1 = 3.14f;             // suffisso 'f' ⇒ tipo float
    double  d1 = 3.14;              // default doppia precisione

    // 2) Notazione esponenziale
    float   f2 = 1.0e3f;            // 1·10^3 = 1000.0f
    double  d2 = 5.0E-2;            // 5·10^-2 = 0.05

    // 3) Limiti di un float
    printf("Range float: [%e … %e]\n", FLT_MIN, FLT_MAX);
    // 4) Dimostrazione di arrotondamento
    float   sum = 0.0f;
    for(int i = 0; i < 1000000; i++) {
        sum += 0.000001f;           // accumulo un milionesimo un milione di volte
    }

    // 5) Stampa dei risultati
    printf("f1 = %.6f, d1 = %.6f\n", f1, d1);
    printf("f2 = %.1f, d2 = %.2f\n", f2, d2);
    printf("Somma approssimata = %.6f (invece di 1.000000)\n", sum);

    return 0;
}
