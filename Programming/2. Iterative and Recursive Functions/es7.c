//
// Created by Guido Marinelli on 20/10/23.
//


#include <stdio.h>

int sommaIterativa(int n) {
    int s = 0;

    for(int i=0; i<=n; i++){
        s = s + i;
    }
    return s;
}

int sommaRicorsiva(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + sommaRicorsiva(n - 1);
    }
}

int sommaEsatta(int n) {
    return (n * (n + 1)) / 2;
}

void test() {
    int sR, sI, sE;
    int check = 1;

    for(int i=1; i<=100; i++) {
        sR = sommaRicorsiva(i);
        sI = sommaIterativa(i);
        sE = sommaEsatta(i);

        if((sR != sI) && (sI != sE)) {
            check = 0;
        }

        printf("Somma ricorsiva/iterativa/esatta fino a %d: %d/%d/%d\n", i, sR, sI, sE);
    }

    if(check == 1) {
        printf("Le tre funzioni danno lo stesso risultato sempre: vero\n");
    }
    else {
        printf("Le tre funzioni danno lo stesso risultato sempre: falso\n");
    }
}

int main() {
    test();
    return 0;
}
