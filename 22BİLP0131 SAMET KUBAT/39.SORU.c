#include <stdio.h>

int main(void) {
  int year;

  printf("bir yil giriniz ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    printf("yil artik yil.\n");
  } else {
    printf("yil artik yil degil.\n");
  }

  return 0;
}
//kullan�c�dan bir y�l de�eri al�n�r sonra bu de�erin 4'e b�l�m�nden kalan�n� kontrol eder. E�er kalan 0 ise, y�l art�k y�ld�r; aksi halde y�l art�k y�l de�ildir.//

