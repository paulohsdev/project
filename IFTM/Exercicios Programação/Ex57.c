#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16)
    {
        printf("N�o eleitor.\n");
    }
    else if (idade >= 18 && idade < 65)
    {
        printf("Eleitor obrigat�rio.\n");
    }
    else
    {
        printf("Eleitor facultativo.\n");
    }
}