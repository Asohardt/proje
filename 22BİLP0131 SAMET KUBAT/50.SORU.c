#include <stdio.h>
#include <string.h>

struct person {
   char name[50];
   int age;
   char car_model[50];
   int car_price;
};

int main(void) {
   struct person p;

   printf("isim girin: ");
   fgets(p.name, 50, stdin);
   // Son karakter olarak sat�r sonu karakteri kal�rsa, bunu siler.
   if (p.name[strlen(p.name) - 1] == '\n') {
      p.name[strlen(p.name) - 1] = '\0';
   }

   printf("yas girin: ");
   scanf("%d", &p.age);

   printf("araba model girin: ");
   fgets(p.car_model, 50, stdin);
   // Son karakter olarak sat�r sonu karakteri kal�rsa, bunu siler.
   if (p.car_model[strlen(p.car_model) - 1] == '\n') {
      p.car_model[strlen(p.car_model) - 1] = '\0';
   }

   printf("araba fiyat girin: ");
   scanf("%d", &p.car_price);

   printf("\nInformation:\n");
   printf("Name: %s\n", p.name);
   printf("Age: %d\n", p.age);
   printf("Car model: %s\n", p.car_model);
   printf("Car price: %d\n", p.car_price);

   return 0;
}
//Bu program �al��t�r�ld���nda, kullan�c�dan bir ki�inin ad�, ya��, arabas�n�n modeli ve fiyat� girmesi bekleniyor.Verilenn bilgilerden sonra ekrana yazd�r�l�r//
