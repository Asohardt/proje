#include<stdio.h>
#include <string.h>

//Girilen kelimenin karakter say�s�n� hesaplayan program.

main(){
	char kelime[10];
	
	printf("Kelime giriniz: ");
	gets(kelime);	
	
	printf("Bu kelime %d karakterden olusuyor.", strlen(kelime));
}
