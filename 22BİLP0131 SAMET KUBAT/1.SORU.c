#include <stdio.h>
int main(){
	
	int yil;
	printf("Bir yil giriniz: ");
	scanf("%d",&yil);
	
	if(yil%4 == 0){
		printf("Girdiginiz yil artik yildir.");
	}
	else{
		printf("Girdiginiz yil artik yil degildir.");
	}
}

//Kullan�c�dan bir y�l girmesini ister ve girdi�in y�l olup olmad���n�  ��kar�r.//
