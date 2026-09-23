#include <stdio.h>
#include <stdlib.h>

int main() {
    float *p = malloc(sizeof(float));
    printf("Inserisci un numero decimale: ");
    printf("Valore inserito aumentato del 20%%: %.2f\n", *p * 1.2f);
    free(p);
    return 0;
}