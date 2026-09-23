#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;

    printf("Array: [");
    for (int i = 0; i < 5; i++)
        printf("%d%s", *(a + i), i < 4 ? ", " : "");
    printf("]\n");

    printf("Elementi dell'array stampati tramite puntatore:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *p);
        p++;
    }

    return 0;
}