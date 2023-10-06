//
// Created by Guido Marinelli on 05/10/23.
//

#include <stdio.h>

int main() {
    /* dichiarazioni variabili */
    int a, b;
    int tot, mod_a, mod_b, maxResult;
    char sign_a, sign_b;

    /* acquisizione variabile 'a', 'b' con scanf */
    printf("Inserisci il primo numero (a): ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero (b): ");
    scanf("%d", &b);

    /* verfico se 'b' è positivo, calcolo il modulo di 'b' e il segno di 'b' per il risulato massimo */
    if(b >= 0) {
        printf("Il numero %d è positivo\n", b);
        mod_b = b;
        sign_b = '+';
    }
    else {
        printf("Il numero %d è negativo\n", b);
        mod_b = -1 * b;
        sign_b = '-';
    }

    /* verifico se 'a' è un numero pari o dispari e stampo il risultato */
    if(a % 2 == 0) {
        printf("Il numero %d è pari\n", a);
    }
    else {
        printf("Il numero %d è dispari\n", a);
    }

    /* calcolo la somma di a + b */
    tot = a + b;
    printf("La somma a + b è: %d\n", tot);

    /* calcolo il modulo di 'a' e il segno di 'a' per il risulato massimo */
    if(a >= 0) {
        mod_a = a;
        sign_a = '+';
    }
    else {
        mod_a = -1 * a;
        sign_a = '-';
    }
    /* calcolo e stampo per quale scelta dei segni l'espresione porta al risultato massimo e il suo valore */
    maxResult = mod_a + mod_b;
    printf("Per la scelta dei segni %ca + %cb abbiamo il risultato massimo.\n", sign_a, sign_b);
    printf("Questo valore è: %d\n", maxResult);

    return 0;
}
