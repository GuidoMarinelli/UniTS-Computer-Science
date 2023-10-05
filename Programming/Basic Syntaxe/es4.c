//
// Created by Guido Marinelli on 05/10/23.
//

#include <stdio.h>

int main() {
    int a, b, max;

    scanf("%d", &a);
    scanf("%d", &b);

    max = a;

    if(max < b)
        max = b;

    printf("%d\n", max);

    return 0;
}
