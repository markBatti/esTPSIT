#include <stdio.h>

int main() {
    int n;
    printf("Altezza ");
    scanf("%d", &n);
    for (int riga = 1; riga <= n; riga++) {
        for (int k = 0; k < riga; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}