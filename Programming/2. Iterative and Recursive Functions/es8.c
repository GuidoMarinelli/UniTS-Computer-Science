//
// Created by Guido Marinelli on 23/10/23.
//

#include <stdio.h>

void stampaIntervallo(int a, int b) {
    int i = a + 2;

    printf("a = %d, b = %d --> %d", a, b, a);

    while(i <= b) {
        printf(", %d", i);
        i = i + 2;
    }

    printf("\n");
}

int main() {
    int a, b;

    printf("Inserisci l'estremo inferiore dell'intervallo (a): ");
    scanf("%d", &a);
    printf("Inserisci l'estremo superiore dell'intervallo (b): ");
    scanf("%d", &b);

    stampaIntervallo(a, b);

    return 0;
}