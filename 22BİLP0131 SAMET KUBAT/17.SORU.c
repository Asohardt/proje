#include <stdio.h>

int main(){
	
    int n, i;

    printf("Bir tamsayi girin: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {	
    
    printf("%d * %d = %d \n", n, i, n*i);
    }
    return 0;
}


// d�ng�ye ald�k 1 ile 10 aras�nda sonra printf ile de�i�keni �arpt�r�p erkana yazd�rd�k.//
 
