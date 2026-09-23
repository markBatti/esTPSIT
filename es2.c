#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Inserisci numero: ");
    scanf("%d", &n);
    if (n%2 == 0) {
        printf("Numero pari") ;
    }else {
        printf("Numero dispari") ;
    }
    return 0;
}