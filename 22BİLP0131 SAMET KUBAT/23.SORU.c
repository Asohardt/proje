#include <stdio.h>

int main() {
  int kenar;
  int alan;
  int cevre;

  printf("karenin kenar uzunlu�unu giriniz: ");
  scanf("%d", &kenar);
 
  alan = kenar * kenar;
  printf("Karenin alan�: %d\n", alan);
 
  cevre = 4 * kenar;
  printf("Karenin cevresi: %d\n", cevre);
 
  return 0;
}

// karenin bir kenar uzunlu�unu girmesini istedik.sonras�nda aln ve �evre sonucu ortaya ��kt�//
