#include <stdio.h>

int main(void) {
   int c, i, j, k;

   printf("satir sayisi girin: ");
   scanf("%d", &c);

   for (i = 1; i <= c; i++) {
      for (j = 1; j <= c - i; j++) {
         printf(" ");
      }

      for (k = 1; k <= i; k++) {
         printf("%d ", k);
      }

      printf("\n");
   }

   return 0;
}
//Bu program �al��t�r�ld���nda, kullan�c�dan sat�r say�s�n� isteyen bir mesaj g�sterilir ve kullan�c�dan bir say� girilmesi beklenir. Daha sonra, kullan�c�n�n girdi�i say� kadar sat�r olu�turulur //
