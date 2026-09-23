#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *a=&x, *b=&y ;
    printf("Prima dello scambio: x = %d, y = %d\n", x, y);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);
    return 0;
}