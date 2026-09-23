#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, tentativo, i;
    bool trovato;
    srand(time(NULL));
    n = rand() % 100 + 1;
    printf("Indovina un numero tra 1 e 100. Hai 7 tentativi\n");
    for (i = 1; i <= 7 && !trovato; i++) {
        printf("Tentativo %d: ", i);
        if (scanf("%d", &tentativo) != 1)
            return 1;
        if (tentativo < n)
            printf("Basso\n");
        else if (tentativo > n)
            printf("Alto\n");
        else {
            printf("Corretto");
            trovato = 1;
        }
    }
    if (!trovato)
        printf("Tentativi esauriti. Il numero era %d", n);
    return 0;
}