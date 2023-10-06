//
// Created by Guido Marinelli on 06/10/23.
//

#include <stdio.h>

int main() {
    int n, number, min, max;
    int i = 1;

    /* acquisco il valore di 'n' con scanf */
    printf("Inserisci il numero (n): ");
    scanf("%d", &n);

    if(n > 0) {
        /* acquisizione il valore di 'number' con scanf */
        printf("Inserisci il numero (%d): ", i);
        scanf("%d", &number);

        /* inizilizza max e min al valore del primo number_i inserito */
        max = number;
        min = number;
        i += 1;

        while(i <= n) {  // nel caso n > 1
            /* acquisizione con scanf dei valori 'number_i' successivi al primo number */
            printf("Inserisci il numero (%d): ", i);
            scanf("%d", &number);

            /* determina e assegna il max e il min */
            if(number > max) {
                max = number;
            }
            if(number < min) {
                min = number;
            }
            i += 1;
        }

        /* stampa il max e il min */
        printf("Il numero massimo inserito è: %d\n", max);
        printf("Il numero minimo inserito è: %d\n", min);
    }

    return 0;
}
