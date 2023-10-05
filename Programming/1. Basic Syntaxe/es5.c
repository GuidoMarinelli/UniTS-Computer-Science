//
// Created by Guido Marinelli on 05/10/23.
//

#include <stdio.h>

int main() {
    int x;

    printf("Inserisci il numero (x): ");
    scanf("%d", &x);

    if(x >= 0) {
        printf("Il numero %d è positivo\n", x);
        printf("Il valore assoluto di %d è |%d| = %d\n", x, x, x);
    }
    else {
        printf("Il numero %d è negativo\n", x);
        printf("Il valore assoluto di %d è |%d| = %d\n", x, x, x * -1);
    }

    return 0;
}
