#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Bir metin girin: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Girilen metin b�y�k harflerle: %s\n", str);

    return 0;
}


// Metni b�y�k harflere �evirir ve �evrilmi� metin ekrana yazd�r�l�r.//

