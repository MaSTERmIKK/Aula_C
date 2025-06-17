#include <stdio.h>   // definisce FILE, fopen, fclose, fgetc, fputc, perror, stdin, stdout
#include <errno.h>   // definisce errno
#include <stdlib.h>  // definisce EXIT_FAILURE, EXIT_SUCCESS

int main(void) {
    // 1) Apro un file per lettura
    FILE *fp = fopen("input.txt", "r");
    if (!fp) {
        // 2) Se fopen fallisce, errno è settato
        perror("Errore apertura file");  
        return EXIT_FAILURE;
    }

    // 3) Copio carattere per carattere da fp a stdout
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, stdout);
    }

    // 4) Controllo errori di lettura
    if (ferror(fp)) {
        perror("Errore durante la lettura");
        fclose(fp);
        return EXIT_FAILURE;
    }

    // 5) Chiudo lo stream
    fclose(fp);
    return EXIT_SUCCESS;
}
