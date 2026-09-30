#include <stdio.h>

int main() {
   int v[20],n,a;
   printf("Digita la granddezza del array ");
   scanf("%d",&n);
   while (n < 1 || n > 20) {
      printf("Numero non valido (1-20): ");
      scanf("%d", &n);
   }
   for (int i=0;i<n;i++) {
      printf("Inserisci un numero: ");
      scanf("%d",&v[i]);
   }
   printf("Array prima \n");
   for (int i=0;i<n;i++) {
      printf(" %d ",v[i]);
   }
   for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
         a = v[j];
         v[j] = v[j + 1];
         v[j + 1] = a;
      }
   }
   printf("Array dopo ");
   for (int i=0;i<n;i++) {
      printf("%d ",v[i]);
   }

}