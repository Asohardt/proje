#include <stdio.h>

int main(void) {
  int yas;

  printf("ya� girniz: ");
  scanf("%d", &yas);

  if (yas <= 0) {
    printf("bebek\n");
  } else if (yas <= 2) {
    printf("cocuk\n");
  } else if (yas <= 5) {
    printf("cocuk\n");
  } else if (yas <= 12) {
    printf("cocuk\n");
  } else if (yas <= 17) {
    printf("gen�\n");
  } else if (yas <= 22) {
    printf("gen� yeti�kin\n");
  } else if (yas <= 65) {
    printf("yeti�kin\n");
  } else {
    printf("yasli\n");
  }

  return 0;
}
//Kullan�c�dan bir ya� de�eri al�n�r daha sonra bu de�ere g�re ko�ullar� kontrol eder. E�er de�er 0 veya daha k���kse, "Bebek" yazd�r�l�r; 1 veya 2 ise, "�ocuk" yazd�r�l�r.//
