#include <stdio.h>

int main(void) {
   int c, sum = 0, r;

   printf("bir numara giriniz: ");
   scanf("%d", &c);

   while (c != 0) {
      r = c % 10;  // Say�n�n birler basama��n� al�r.
      sum = sum + r;  // Toplam� g�nceller.
      c = c / 10;  // Say�y� 10'a b�ler ve kalan� atar.
   }

   printf("rakamlar�n toplami: %d\n", sum);

   return 0;
}
//Bu program �al��t�r�ld���nda, kullan�c�dan bir say� girilmesi beklenir ve kullan�c�n�n girdi�i say�daki rakamlar�n toplam� hesaplan�r.//
