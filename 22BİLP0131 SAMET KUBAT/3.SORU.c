#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[100]; // kullan�c�dan al�nan c�mle
  char aranan_karakter; // aranacak karakter
  
  printf("Lutfen bir cumle girin: ");
  scanf("%[^\n]s", cumle); 
  
  printf("Lutfen aranacak karakteri girin: ");
  scanf(" %c", &aranan_karakter); 
  
  int i;
  int karakter_sayisi = 0; 
  for (i = 0; i < strlen(cumle); i++) {
    
    if (cumle[i] == aranan_karakter) {
      karakter_sayisi++;
    }
  }
  
  printf("Cumle icinde %c karakterinden %d tane var.\n", aranan_karakter, karakter_sayisi);
  
  return 0;
}
//kullan�c�dan bir c�mle ve bir karakter al�yor Daha sonra c�mlenin i�inde ka� tane o karakter oldu�unu buluyor ve printf le ekrana yazd�r�yor.//
