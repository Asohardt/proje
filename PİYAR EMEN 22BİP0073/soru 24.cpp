#include<stdio.h>

//1'den 50'ye kadar olan t�m do�al say�lar�, tek ve �ift say�lar� ayr� ayr� yazd�ran program.

main(){
	printf("1'den 50'ye kadar dogal sayilar:\n");
	for(int i=0; i <= 50; i++){
		printf("%d\n", i);
	}
	
	printf("\n");
	
	printf("1'den 50'ye kadar cift dogal sayilar:\n");
	for(int i=0; i <= 50; i++){
		if(i%2 == 0){
			printf("%d\n", i);
		}
	}
	
	printf("\n");
	
	printf("1'den 50'ye kadar tek dogal sayilar:\n");
	for(int i=0; i <= 50; i++){
		if(i%2 == 1){
			printf("%d\n", i);
		}
	}
}
