#include <stdio.h>

int main() {
    char s[101];
    int lun = 0;
    printf("Inserisci una stringa ");
    fgets(s, sizeof s, stdin);
    while (s[lun] != '\0' && s[lun] != '\n')
        lun++;
    printf("Stringa invertita ");
    for (int i = lun - 1; i >= 0; i--)
        putchar(s[i]);
    putchar('\n');
    return 0;
}