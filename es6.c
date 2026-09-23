#include <stdio.h>

int main() {
    char s[101];
    int i = 0, vocali = 0;
    printf("Inserisci una parola: ");
    fgets(s, 101, stdin);
        while (s[i] != '\0') {
        char c = s[i];
        if (c=='a'||c =='e'||c=='i'||c=='o'||c=='u')
            vocali++;
        i++;
    }
    printf("Vocali presenti %d", vocali);
    return 0;
}