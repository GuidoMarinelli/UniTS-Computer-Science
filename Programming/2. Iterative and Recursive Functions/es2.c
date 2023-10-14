//
// Created by Guido Marinelli on 14/10/23.
//

#include <stdio.h>

int potenzaIterativa(int a, int b) {
    int pow;

    pow = a;

    for(int i = 1; i < b; i++) {
        pow = pow * a;
    }

    return pow;
}

int potenzaRicorsiva(int a, int b) {
    if(b == 1) {
        return a;
    }
    else {
        return a * potenzaRicorsiva(a, b - 1);
    }
}

void test() {
    int start_int = 1;
    int end_int = 2;
    int pow;

    for(int i=start_int; i <= end_int; i++) {
        for(int j=start_int; j <= end_int; j++) {

            //pow = potenzaIterativa(i, j);
            pow = potenzaRicorsiva(i, j);

            printf("coppia (a = %d, b = %d) - a^b = %d^%d = %d\n", i, j, i, j, pow);
        }
    }
}

int main() {
    int a, b;

    printf("Inserisci il numero (a): ");
    scanf("%d", &a);
    printf("Inserisci il numero (b): ");
    scanf("%d", &b);

    //printf("a^b : %d\n", potenzaIterativa(a, b));
    printf("a^b : %d\n", potenzaRicorsiva(a, b));

    test();

    return 0;
}