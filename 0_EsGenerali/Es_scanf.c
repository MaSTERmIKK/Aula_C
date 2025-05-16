scanf("%d", &age)

Legge un intero, lo memorizza in age; controlla che sia stato letto correttamente.

scanf("%f", &weight)

Legge un numero floating-point in weight; verifica il successo della conversione.

scanf("%19s", name)

Legge una parola (fino al primo whitespace), massimo 19 caratteri + \0, per evitare overflow di name[20].

Controllo del valore di ritorno

Se diverso da 1, significa che la conversione non è andata a buon fine o c’è stato EOF.

Uso di %s

Non legge spazi interni: se servono frasi è necessario usare fgets().
