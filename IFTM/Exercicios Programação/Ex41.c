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
            printf("Voc� j� tem idade para votar\n");
        else
            printf("Voc� n�o tem idade para votar.\n");

        if (idade > 18)
            printf("Voc� j� tem idade para tirar habilita��o !\n.");
        else
            printf("Voc� n�o tem idade para tirar habilita��o.");
    }
}
