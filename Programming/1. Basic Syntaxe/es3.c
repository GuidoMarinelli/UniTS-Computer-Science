//
// Created by Guido Marinelli on 05/10/23.
//

# include <stdio.h>

int main() {
    float a, b;
    float sum, dif, mul, div;

    printf("Inserisci il primo numero (a): ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero (b): ");
    scanf("%f", &b);

    sum = a + b;
    dif = a - b;
    mul = a * b;
    div = a / b;

    printf("La somma a + b è: %.0f\n", sum);
    printf("La differenza a - b è: %.0f\n", dif);
    printf("Il prodotto  a * b è: %.0f\n", mul);
    printf("La divisione a / b è: %.0f\n", div);

    return 0;
}
