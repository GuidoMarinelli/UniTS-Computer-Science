//
// Created by Guido Marinelli on 06/10/23.
//

#include <stdio.h>

int main() {

    /* dichiarazioni variabili */
    float num;
    int count = 1;  // evita una divisione per 0
    float tot = 0;
    float avg = 0;

    /* acquisizione variabile con scanf */
    printf("Inserisci un numero (x_i): ");
    scanf("%f", &num);

    /* somma i n_i numeri finchè non si inserisce uno 0 */
    while(num != 0) {
        tot = tot + num;
        count += 1;

        printf("Inserisci un numero (x_i): ");
        scanf("%f", &num);
    }

    /* fa si che in caso si fosse inserito almeno un numero il conteggio sia corretto */
    if(count > 1 ) {
        count = count - 1;
    }

    /* calcolo e stampo la media */
    avg = tot / count;
    printf("La media dei numeri inseriti è: %.1f\n", avg);

    return 0;
}