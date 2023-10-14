//
// Created by Guido Marinelli on 14/10/23.
//

#include <stdio.h>

int minimo(int x, int y, int z) {

    int min;

    min = x;

    if(min > y) {
        min = y;
    }
    if(min > z) {
        min = z;
    }
    return min;
}

void test() {
    int x, y, max;
    int min;

    printf("Inserisci il numero (x): ");
    scanf("%d", &x);

    printf("Inserisci il numero (y): ");
    scanf("%d", &y);

    max = x;
    if(max < y) {
        max = y;
    }

    for(int w=1; w <= max; w++) {
        min = minimo(x, y, w);

        printf("tripletta (%d, %d, %d) - minimo -> %d\n", x, y, w, min);
    }
}

int main() {
    test();
    return 0;
}
