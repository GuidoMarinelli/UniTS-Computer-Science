//
// Created by Guido Marinelli on 05/10/23.
//

#include <stdio.h>

int main() {

    /* dichiarazioni variabili */
    int a, b;
    int tot;
    float avg;

    /* acquisizione variabili con scanf */
    printf("Insersci il primo numero: ");
    scanf("%d", &a);
    printf("Insersci il secondo numero: ");
    scanf("%d", &b);

    /* calcolo e stampo la somma */
    tot = a + b;
    printf("La somma totale è: %d\n", tot);

    /* calcolo e stampo la media aritmetica */
    avg = tot / 2;
    printf("La media aritmetica è: %.0f\n", avg);

    return 0;
}