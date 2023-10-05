//
// Created by Guido Marinelli on 05/10/23.
//

#include <stdio.h>

int main() {

    /* dichiarazioni variabili */
    int n;
    int prev, next;

    /* acquisizione variabile con scanf */
    printf("Inserisci il numero: ");
    scanf("%d", &n);

    /* calcolo e stampo il successivo */
    next = n + 1;
    printf("Il successivo di %d è: %d\n", n, next);

    /* calcolo e stampo il precedente */
    prev = n - 1;
    printf("Il precedente di %d è: %d\n", n, prev);

    return 0;
}