#include <stdio.h>

int main(void) {
  int grade;

  printf("bir not girin: ");
  scanf("%d", &grade);

  if (grade >= 90) {
    printf("AA\n");
  } else if (grade >= 80) {
    printf("BA\n");
  } else if (grade >= 70) {
    printf("BB\n");
  } else if (grade >= 60) {
    printf("CB\n");
  } else if (grade >= 50) {
    printf("CC\n");
  } else {
    printf("FF\n");
  }

  return 0;
}
//Kullan�c�dan bir not de�eri al�r ve daha sonra bu de�ere g�re ko�ullar� kontrol eder. E�er ��kqn de�er 90 veya daha y�ksekse, "AA" yazd�r�l�r; 80 veya daha y�ksekse, ancak 90'dan d���kse, "BA" yazd�r�l�r//

