#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char rua[50], bairro[50], estado[3], cidade[50];
    int nrua, cep;
} endereco;
endereco endfunc[10];

typedef struct
{
    char nomefunc[50], copnome[50];
    int codfunc, codcargo, stop, copcargo;
    endereco endfunc;
    float salariofunc, salariocop;
} cadastro;
cadastro cad[10];

void ordenacao()
{
    int op, i, j, x, y, r, aux1, aux3;
    char aux[50], aux2[50];

    setlocale(LC_ALL, "");

    printf("1 - Ordenação de A-Z\n");
    printf("2 - Ordenação de Z-A\n");
    printf("3 - Ordenação salário crescente\n");
    printf("4 - Ordenação de salário decrescente\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1: // * CLASSIFICAR ORDEM ALFABÉTICA A-Z
        system("cls");

        for (x = 0; x < cad[x].stop; x++)
        {

            for (y = x + 1; y < cad[y].stop; y++)
            {
                if (strcmp(cad[x].copnome, cad[y].copnome) > 0)
                {

                    strcpy(aux, cad[x].copnome);
                    strcpy(cad[x].copnome, cad[y].copnome);
                    strcpy(cad[y].copnome, aux);

                    aux1 = cad[x].salariocop;
                    cad[x].salariocop = cad[y].salariocop;
                    cad[y].salariocop = aux1;

                    // aux1 = cad[x].copcargo;
                    // cad[x].copcargo = cad[y].copcargo;
                    // cad[y].copcargo = aux1;
                }
            }
        }

        for (i = 0; i < cad[i].stop; i++)
        {
            printf("Nome: %s", cad[i].copnome);
        }
        system("pause");
        break;
    case 2: // * CLASSIFICAR ORDEM ALFABÉTICA Z-A
        system("cls");
        for (x = 0; x < cad[x].stop; x++)
        {
            for (y = x + 1; y < cad[y].stop; y++)
            {
                if (strcmp(cad[x].copnome, cad[y].copnome) < 0)
                {
                    strcpy(aux, cad[x].copnome);
                    strcpy(cad[x].copnome, cad[y].copnome);
                    strcpy(cad[y].copnome, aux);

                    aux1 = cad[x].salariocop;
                    cad[x].salariocop = cad[y].salariocop;
                    cad[y].salariocop = aux1;

                    // aux1 = cad[x].copcargo;
                    // cad[x].copcargo = cad[y].copcargo;
                    // cad[y].copcargo = aux1;
                }
            }
        }
        for (i = 0; i < cad[i].stop; i++)
        {
            printf("Nome: %s", cad[i].copnome);
        }
        system("pause");
        break;
    case 3: // * ORDENAR SALÁRIO CRESCENTE
        system("cls");
        for (x = 0; x < cad[x].stop; x++)
        {
            for (y = x + 1; y < cad[y].stop; y++)
            {
                if (cad[x].salariocop > cad[y].salariocop)
                {
                    strcpy(aux, cad[x].copnome);
                    strcpy(cad[x].copnome, cad[y].copnome);
                    strcpy(cad[y].copnome, aux);

                    aux1 = cad[x].salariocop;
                    cad[x].salariocop = cad[y].salariocop;
                    cad[y].salariocop = aux1;

                    // aux1 = cad[x].copcargo;
                    // cad[x].copcargo = cad[y].copcargo;
                    // cad[y].copcargo = aux1;
                }
            }
        }

        for (i = 0; i < cad[i].stop; i++)
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].copnome, cad[i].salariocop);
        }
        system("pause");
        break;

    case 4: // * SALÁRIO DECRESCENTE
        system("cls");
        for (x = 0; x < cad[x].stop; x++)
        {
            for (y = x + 1; y < cad[y].stop; y++)
            {
                if (cad[x].salariocop < cad[y].salariocop)
                {
                    strcpy(aux, cad[x].copnome);
                    strcpy(cad[x].copnome, cad[y].copnome);
                    strcpy(cad[y].copnome, aux);

                    aux1 = cad[x].salariocop;
                    cad[x].salariocop = cad[y].salariocop;
                    cad[y].salariocop = aux1;

                    // aux1 = cad[x].copcargo;
                    // cad[x].copcargo = cad[y].copcargo;
                    // cad[y].copcargo = aux1;
                }
            }
        }

        for (i = 0; cad[i].stop != 0; i++)
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].copnome, cad[i].salariocop);
        }
        system("pause");
        break;
    }
}