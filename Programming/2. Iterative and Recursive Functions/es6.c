//
// Created by Guido Marinelli on 17/10/23.
//

#include <stdio.h>

int fattorialeIterativo(int n) {
    int f = 1;

    if(n == 0 || n == 1) {
        return f;
    }
    else {
        while(n > 1) {
            f = f * n;
             n = n - 1;
        }
        return f;
    }
}

int fattorialeRicorsivo(int n) {
    if(n <= 1) {
        return 1;
    }
    else {
        return n * fattorialeRicorsivo(n - 1);
    }
}

void test() {
    int rico, iter;
    int n = 10;
    int count = 0;

    for(int i=1; i <= n; i++) {
        rico = fattorialeRicorsivo(i);
        iter = fattorialeIterativo(i);

        if(rico == iter) {
            count += 1;
        }

        printf("Fattoriale ricorsivo/iterativo di %d: %d/%d\n", i, rico, iter);
    }

    if(count == n) {
        printf("Le due funzioni danno lo stesso risultato sempre: vero\n");
    }
    if(count < n) {
        printf("Le due funzioni danno lo stesso risultato sempre: NON vero\n");
    }
}

int main() {
    test();
    return 0;
}