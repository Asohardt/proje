#include <stdio.h>
int main(){
	
	int notu;
	printf("Notunuzu giriniz: ");
	scanf("%d",&notu);
	
	if(notu >= 90){
		printf("Notunuz : A+");
	}
	else if(notu >= 85){
		printf("Notunuz : A");
		
	}
	else if(notu >= 75){
		printf("Notunuz : B+");
		
	}
	else if(notu >= 70){
		printf("Notunuz : B");
		
	}
	else if(notu >= 50){
		printf("Notunuz : C");
	}
	else 
		printf("Gecer not alamadiniz.");

}
	///kullan�c�dan girilen nota g�re if else d�ng�s�yle ald��� notu g�sterdik ve ona g�re gecer not ali�p almad���n� ekrana yazd�rd�.\\
