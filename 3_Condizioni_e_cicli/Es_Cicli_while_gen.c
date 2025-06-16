#include <stdio.h>

int main() {
    char risposta = 'n';

    while (risposta != 's') {
        printf("Vuoi uscire dal programma? (s/n): ");
        scanf(" %c", &risposta); 
        // spazio prima di %c per pulire il buffer

        if (risposta != 's') {
            printf("Programma ancora in esecuzione...\n");
        }
    }
    printf("Programma terminato.\n");
    return 0;
}



-----------------------------------------------


  #include <stdio.h>

int main() {
    int numero, trovato = 0; // 0 = falso, 1 = vero

    while (!trovato) {
        printf("Indovina il numero segreto (tra 1 e 5): ");
        scanf("%d", &numero);

        if (numero == 3) {
            printf("Hai indovinato!\n");
            trovato = 1; // esce dal ciclo
        } else {
            printf("Ritenta.\n");
        }
    }
    return 0;
}


---------------------------------------------------------


#include <stdio.h>
#include <stdbool.h> // Necessario per usare il tipo bool

int main() {
    int numero;
    bool continua = true; // Variabile booleana di controllo

    while (continua) {
        printf("Inserisci un numero (0 per terminare): ");
        scanf("%d", &numero);

        if (numero == 0) {
            continua = false; // Interrompe il ciclo
        } else {
            printf("Hai inserito il numero %d\n", numero);
        }
    }
    printf("Ciclo terminato!\n");
    return 0;
}

