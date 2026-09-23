#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, somma = 0;
    printf("Quanti numeri vuoi inserire ?");
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
        somma += v[i];
    }
    printf("Somma totale: %d\n", somma);
    free(v);
    return 0;
}