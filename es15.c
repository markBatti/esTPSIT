#include <stdio.h>

int main() {
    int v[5];
    for (int c = 0; c < 5; c++) {
        printf("Inserisci il numero per la colonna: ");
        scanf("%d", &v[c]);
        while (v[c] < 0 || v[c] > 10) {
            printf("Errore, numero non valido (0-10): ");
            scanf("%d", &v[c]);
        }
    }
    printf("Valori : %d %d %d %d %d\n", v[0], v[1], v[2], v[3], v[4]);

    for (int i = 10; i > 0; i--) {
        for (int j = 0; j < 5; j++) {
            if (v[j] >= i) {
                printf(" #");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("- - - - -\n");
    printf("%d %d %d %d %d\n", v[0], v[1], v[2], v[3], v[4]);
    return 0;

}