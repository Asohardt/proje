#include<stdio.h>

//Klavyeden girilen harfin sesli harf olup olmad���n� kontrol eden program.

main(){
	char harf;
	
	printf("Bir harf giriniz: ");
	scanf("%s", &harf);
	
	if(harf == 'a' || harf == 'e' || harf == '�' || harf == 'i' || harf == 'o' || harf == '�' || harf == 'u' || harf == '�'){
		printf("Girdiginiz harf seslidir.");
	}
	
	else{
		printf("Girdiginiz harf sessizdir.");
	}
}
