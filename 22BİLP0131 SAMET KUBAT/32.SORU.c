#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void) {
  int mat[ROWS][COLS];

  printf("Lutfen matrisin degerlerini girin:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  printf("\nGirilen matris:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
//matris adl� bir 2 boyutlu dizi olu�turulur ve kullan�c�dan bu dizinin de�erleri al�n�r. Daha sonra, bu dizi ekrana yazd�r�l�r.//
