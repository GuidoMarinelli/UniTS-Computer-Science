//
// Created by Guido Marinelli on 16/10/23.
//

#include <stdio.h>

float calcolaPrezzoScontato(float prezzo, int sconto) {
    float percentualeSconto;

    percentualeSconto = 100 - sconto;
    percentualeSconto = percentualeSconto / 100;

    return prezzo * percentualeSconto;
}

int main() {
    float prezzoIniziale, prezzoScontato;
    int valoreSconto;

    printf("Inserisci il prezzo dell'articolo: ");
    scanf("%f", &prezzoIniziale);
    printf("Inserisci un valore intero rappresentate lo sconto: ");
    scanf("%d", &valoreSconto);

    prezzoScontato = calcolaPrezzoScontato(prezzoIniziale, valoreSconto);

    printf("Il prezzo scontato dell'articolo è %.2f€\n", prezzoScontato);

    return 0;
}