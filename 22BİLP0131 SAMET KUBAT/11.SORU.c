#include <stdio.h>
///girilen bir ya�a kar��l�k gelen hayat dilimini g�steren program soru 17
int main(){
	int yas;
	
	printf("Yasinizi giriniz : ");
	scanf("%d",&yas);
	
	if(yas<=5){
		printf("Bebeksiniz.");
	}
	else if(yas<=17){
		printf("Cocuksunuz.");
	}
	else if(yas<=30){
		printf("Gencsiniz.");
	}
	else if(yas<=45){
		printf("Orta yasliniz.");
	}
	else if(yas<=119){
		printf("Yasliniz.");
	}
	else{
		printf("Yanlis giris yaptiniz.");
	}
	
}

///kullan�c�dan girilen ya�a g�re if else d�ng�s� kullan�larak ya�l�l�k d�nemini bulduk\\
