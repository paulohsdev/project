#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[50], tiposanguineo[2], fatorrh[2];
    int dia, mes, ano;

} cadastro;

int main()
{

    int i;

    cadastro cad[600];

    setlocale(LC_ALL, "");

    for (i = 0; i < 600; i++)
    {

        printf("Digite o dia do seu nascimento: \n");
        scanf("%d", &cad[i].dia);

        printf("Digite o mês do seu nascimento: \n");
        scanf("%d", &cad[i].mes);

        printf("Digite o ano do seu nascimento: \n");
        scanf("%d", &cad[i].ano);

        printf("Digite o nome:");
        fflush(stdin);
        scanf("%s", &cad[i].nome);

        printf("Digite o tipo sanguineo:");
        fflush(stdin);
        scanf("%s", &cad[i].tiposanguineo);

        printf("Digite o fator rh:");
        fflush(stdin);
        scanf("%s", &cad[i].fatorrh);
    }

    for (i = 0; i < 600; i++)
    {
        if (cad[i].ano >= 1967 && cad[i].ano <= 2004)
        {
            if (strcmp(cad[i].tiposanguineo, "B") == 0 && strcmp(cad[i].fatorrh, "+") == 0)
            {
                printf("Nome: %s\n", cad[i].nome);
            }
        }
    }
}