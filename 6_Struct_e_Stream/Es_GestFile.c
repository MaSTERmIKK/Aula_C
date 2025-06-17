#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {
    // 1) Apertura in lettura testuale
    FILE *in = fopen("input.txt", "r");
    if (!in) {
        perror("Errore apertura input.txt");  // errno setta il perché
        return EXIT_FAILURE;
    }

    // 2) Apertura in scrittura binaria
    FILE *out = fopen("output.bin", "wb");
    if (!out) {
        perror("Errore apertura output.bin");
        fclose(in);
        return EXIT_FAILURE;
    }

    // 3) Lettura riga per riga e stampa a stdout
    char buffer[256];
    while (fgets(buffer, sizeof buffer, in)) {
        printf("Letto: %s", buffer);
    }
    if (ferror(in)) {
        perror("Errore durante la lettura di input.txt");
    }
    rewind(in);  // ritorno all’inizio per la fase binaria

    // 4) Copia binaria da input a output
    unsigned char chunk[128];
    size_t n;
    while ((n = fread(chunk, 1, sizeof chunk, in)) > 0) {
        size_t written = fwrite(chunk, 1, n, out);
        if (written < n) {
            perror("Errore durante la scrittura in output.bin");
            break;
        }
    }
    if (ferror(in)) {
        perror("Errore di lettura binaria");
    }

    // 5) Posizionamento e lettura di un int in mezzo al file binario
    if (fseek(out, sizeof chunk * 2, SEEK_SET) == 0) {
        int val;
        if (fread(&val, sizeof val, 1, out) == 1) {
            printf("Valore int letto da output.bin a offset %ld: %d\n",
                   (long)(sizeof chunk * 2), val);
        }
    }

    // 6) Flush e chiusura
    fflush(out);    // assicuro che tutto sia scritto su disco
    fclose(in);
    fclose(out);

    // 7) Rinomino e rimozione file temporaneo di esempio
    // rename("output.bin", "data.bin");
    // remove("input.txt");

    return EXIT_SUCCESS;
}
