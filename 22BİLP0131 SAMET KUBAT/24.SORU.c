#include <stdio.h>
#include <string.h>

int main(void) {
  char kelime[100]; 
  int sesli_harf_sayisi = 0; 

  printf("Lutfen bir kelime girin: ");
  scanf("%s", kelime);

  int i;
  for (i = 0; i < strlen(kelime); i++) {
    
    if (kelime[i] == 'a' || kelime[i] == 'e' || kelime[i] == '�' || kelime[i] == 'i' || kelime[i] == 'o' || kelime[i] == '�' || kelime[i] == 'u' || kelime[i] == '�') {
      sesli_harf_sayisi++;
    }
  }

  printf("Girilen kelime i�inde %d sesli harf var.\n", sesli_harf_sayisi);

  return 0;
}

//C�mledeki sesli harfleri bir de�i�kende toplad�k,Sonras�nda c�mlenin karakter say�s� kadar d�nen bir for d�ng�s� olu�turup c�mlenin her harfine eri�tik.//
