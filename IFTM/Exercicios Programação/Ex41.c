#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int nascimento, anoatual, idade;

    anoatual = 2022;

    printf("Digite sua data de nascimento: \n");
    scanf("%d", &nascimento);

    idade = anoatual - nascimento;

    if (nascimento > 1930)
    {

        if (idade >= 16)
            printf("Você já tem idade para votar\n");
        else
            printf("Você não tem idade para votar.\n");

        if (idade > 18)
            printf("Você já tem idade para tirar habilitação !\n.");
        else
            printf("Você não tem idade para tirar habilitação.");
    }
}
