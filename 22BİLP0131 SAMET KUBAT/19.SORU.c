#include<stdio.h>
#include <locale.h>
#include <string.h>

 int main()
 {
    setlocale(LC_ALL, "Turkish");
    char string[1000];
    printf("B�y�k Harfe �evrilecek Metni Girin: ");
    gets(string);
    printf("Sonu�: \"%s\"\n",strupr(string));
 
    return  0;
    
 }
 
// Bir metin istedik ve bu metni b�y�k harflere �evirdik ve bu �evrilmi� metni ekrana yazd�rd�k.\\
