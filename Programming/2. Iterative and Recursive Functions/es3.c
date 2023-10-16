//
// Created by Guido Marinelli on 16/10/23.
//

#include <stdio.h>
#include <math.h>

double distanza(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main() {
    double x1, y1, x2, y2;

    printf("Inserisci i valori per la coordinata p1.\n");
    printf("x1: ");
    scanf("%lf", &x1);
    printf("y1: ");
    scanf("%lf", &y1);

    printf("Inserisci i valori per la coordinata p2.\n");
    printf("x2: ");
    scanf("%lf", &x2);
    printf("y2: ");
    scanf("%lf", &y2);

    printf("La distanza tra le cordinate p1 e p2 è %.2f\n", distanza(x1, y1, x2, y2));

    return 0;
}