#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    printf("Valore di x %d\n", x);
    printf("Indirizzo di x %p\n", (void *)&x);
    printf("Valore puntato da puntatore %d\n", *p);
    *p = 100;
    printf("\nDopo modifica\n");
    printf("Nuovo valore di x %d\n", x);

    return 0;
}