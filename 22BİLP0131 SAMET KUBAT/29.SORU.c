#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50

int main(void) {
  char first_name[MAX_NAME_LEN];
  char last_name[MAX_NAME_LEN];
  char full_name[MAX_NAME_LEN * 2];

  printf("Adiniz: ");
  scanf("%s", first_name);
  printf("Soyadiniz: ");
  scanf("%s", last_name);

  snprintf(full_name, sizeof(full_name), "%s %s", first_name, last_name);

  printf("Tam adiniz: %s\n", full_name);

  return 0;
}
//Bu programda kullan�c�dan ad ve soyad bilgileri al�n�r ve first_name ve last_name dizilerine saklan�r.Tam ad� ��kt� ��kar//
