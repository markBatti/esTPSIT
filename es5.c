#include <stdio.h>

int main() {
    int n, max, min;
    max = min = 0;
    printf("Inserisci 5 numeri\n");
    for (int i=0; i<5; i++) {
        printf("Inserisci %d numero ", i+1);
        scanf("%d", &n);
        if (n > max) max = n;
        if (n < min) min = n;
    }
    printf("N max = %d \nN min = %d", max, min);
    return 0;
}