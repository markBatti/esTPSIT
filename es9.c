#include <stdio.h>

int main() {
    double a, b;
    char operazione;
    printf("Primo numero: ");
    scanf("%lf", &a);
    printf("Operatore: ");
    scanf(" %c", &operazione);
    printf("Secondo numero: ");
    scanf("%lf", &b);
    switch (operazione) {
        case '+': printf("Risultato: %g", a+b); break;
        case '-': printf("Risultato: %g", a-b); break;
        case '*': printf("Risultato: %g", a*b); break;
        case '/':
            if (b == 0)
                printf("Errore: divisione per zero");
            else
                printf("Risultato: %g", a/b);
            break;
        default:
            printf("Operazione non valida");
    }
    return 0;
}