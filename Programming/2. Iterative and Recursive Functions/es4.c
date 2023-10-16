//
// Created by Guido Marinelli on 16/10/23.
//

#include <stdio.h>

int uguaglianzaApprossimata(double e, double x, double y) {
    double diff;

    diff = x - y;

    if(diff < 0) {
        diff = diff * -1;
    }

    if(diff < e) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    double e, x, y;

    printf("Inserisci epsilon (e): ");
    scanf("%lf", &e);
    printf("Inserisci il numero (x): ");
    scanf("%lf", &x);
    printf("Inserisci il numero (y): ");
    scanf("%lf", &y);

    if(uguaglianzaApprossimata(e,x, y)) {
        printf("i due numeri sono uguali con epsilon %lf\n", e);
    }
    else {
        printf("i due numeri sono diversi con epsilon %lf\n", e);
    }

    return 0;
}
