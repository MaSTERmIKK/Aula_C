#include <stdio.h>

int main(void) {
    // 1) Letterali decimali
    int dec = 123;          // valore decimale 123

    // 2) Letterali ottali (prefisso 0)
    unsigned int oct = 075; // 075₈ = 7*8 + 5 = 61₁₀

    // 3) Letterali esadecimali (prefisso 0x)
    long hex = 0xFF;        // 0xFF₁₆ = 15*16 + 15 = 255₁₀

    // 4) Letterali con suffissi
    unsigned long big = 4294967295UL; // valore massimo di 32-bit unsigned

    // 5) Dimostrazione di overflow (signed 8-bit simulato)
    signed char a = 127;    // massimo di signed char
    a = a + 1;              // overflow: da +127 → –128 in two's-complement

    // 6) Stampa dei risultati
    printf("dec = %d\n", dec);
    printf("oct (075) = %u\n", oct);
    printf("hex (0xFF) = %ld\n", hex);
    printf("big = %lu\n", big);
    printf("overflow signed char: 127 + 1 = %d\n", a);

    return 0;
}
