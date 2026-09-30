#include <stdio.h>

int main() {
    int utente = 1000;
    int ordine = 2000;
    char tipo;

    do {
        printf("u = utente, o = ordine, f = fine: ");
        scanf(" %c", &tipo);

        if (tipo == 'u') {
            utente += 1;
            printf("genera_id(\"utente\") -> %d\n", utente);
        } else if (tipo == 'o') {
            ordine += 1;
            printf("genera_id(\"ordine\") -> %d\n", ordine);
        } else if (tipo != 'f') {
            printf("Errore\n");
        }
    } while (tipo != 'f');

    return 0;
}