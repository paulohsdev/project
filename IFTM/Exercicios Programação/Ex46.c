#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    char letra;

    printf("Digite uma letra: \n");
    scanf("%c", &letra);

    while (letra != "y")
    {

        if (letra == "a" || letra == 'e')
        {
            printf("� uma vogal\n");
        }
        if (letra == "i" || letra == 'o')
        {
            printf("� uma vogal\n");
        }
        if (letra == "u")
        {
            printf("� uma vogal\n");
        }

        else
        {
            printf("� uma consoante");
        }

        printf("Digite uma letra: \n");
        scanf("%c", &letra);
    }
}