#include <stdio.h>

int main() {
    int n, x, tot=0;
    printf("Quanti numeri vuoi inserire ? ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        printf("Inserisci %d numero ",i);
        scanf("%d", &x);
        tot+=x;
    }
    printf("Totale = %d\n",tot);
    printf("Media = %.2f",(float)tot/n);
    return 0;
}