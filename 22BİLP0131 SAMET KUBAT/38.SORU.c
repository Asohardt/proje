#include <stdio.h>

int main()
{
    int age;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Bu ki�i se�imlerde oy verme yeterlili�ine sahiptir.\n");
    } else {
        printf("Bu ki�i se�imlerde oy verme yeterlili�ine sahip de�ildir.\n");
    }

    return 0;
}
//kullan�c�dan ya��n� girmesi beklenir ve girilen ya� de�eri age de�i�kenine atan�r. Daha sonra, if ko�ulu kullan�larak age de�i�keninin 18 veya daha b�y�k olup olmad��� test edilir. E�er age 18 veya daha b�y�kse, kullan�c�n�n se�imlerde oy verme yeterlili�ine sahip oldu�u belirtilir//
