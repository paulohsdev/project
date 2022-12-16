#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int codcargo;
    float salario, somacargo;
} car;
car cargo[3];

typedef struct
{
    char nomefunc[50], rua[50], bairro[50], estado[3], cidade[50];
    int codfunc, codcargo, stop, nrua, cep;
    float salariofunc, mediasalarial;
} cadastro;

cadastro cad[10];
cadastro aux;
car aux1;

int stop;

void ordenacao()
{

    printf("Teste Boss");

    int op, i, j, x, y, r;

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

        for (x = 0; x < stop; x++)
        {
            for (y = x + 1; y < stop; y++)
            {

                if (strcmp(cad[x].nomefunc, cad[y].nomefunc) > 0) // VERIFICA QUAL NOME É MAIOR
                {
                    aux = cad[x];
                    cad[x] = cad[y];
                    cad[y] = aux;

                    aux1 = cargo[x];
                    cargo[x] = cargo[y];
                    cargo[y] = aux1;
                }
            }
        }

        for (i = 0; i < stop; i++) // EXIBIÇÃO ORDENADA DE A-Z
        {
            printf("\nNome: %s", cad[i].nomefunc);
            printf("Rua: %s", cad[i].rua);
            printf("Bairro: %s", cad[i].bairro);
            printf("Estado: %s", cad[i].estado);
            printf("Cidade: %s", cad[i].cidade);
            printf("CEP: %d\n", cad[i].cep);
            printf("Cargo: %d\n", cad[i].codcargo);
            printf("Codigo funcionário: %d\n", cad[i].codfunc);
            printf("Nº Rua: %d\n", cad[i].nrua);
            printf("Salário: %.2f\n", cad[i].salariofunc);
        }

        system("pause");
        break;
    case 2: // * CLASSIFICAR ORDEM ALFABÉTICA Z-A
        system("cls");
        for (x = 0; x < stop; x++)
        {
            for (y = x + 1; y < stop; y++)
            {
                if (strcmp(cad[x].nomefunc, cad[y].nomefunc) < 0)
                {
                    aux = cad[x];
                    cad[x] = cad[y];
                    cad[y] = aux;

                    aux1 = cargo[x];
                    cargo[x] = cargo[y];
                    cargo[y] = aux1;
                }
            }
        }
        for (i = 0; i < stop; i++)
        {
            printf("\nNome: %s", cad[i].nomefunc);
            printf("Rua: %s", cad[i].rua);
            printf("Bairro: %s", cad[i].bairro);
            printf("Estado: %s", cad[i].estado);
            printf("Cidade: %s", cad[i].cidade);
            printf("CEP: %d\n", cad[i].cep);
            printf("Cargo: %d\n", cad[i].codcargo);
            printf("Codigo funcionário: %d\n", cad[i].codfunc);
            printf("Nº Rua: %d\n", cad[i].nrua);
            printf("Salário: %.2f\n", cad[i].salariofunc);
        }

        system("pause");
        break;
    case 3:
        system("cls");
        for (x = 0; x < stop; x++)
        {
            for (y = x + 1; y < stop; y++)
            {
                if (cad[x].salariofunc > cad[y].salariofunc) // VERIFICA QUAL SALÁRIO É MENOR
                {
                    aux = cad[x];
                    cad[x] = cad[y];
                    cad[y] = aux;

                    aux1 = cargo[x];
                    cargo[x] = cargo[y];
                    cargo[y] = aux1;
                }
            }
        }

        for (i = 0; i < stop; i++) // EXIBIÇÃO POR ORDEM CRESCENTE DO SALÁRIO
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].nomefunc, cad[i].salariofunc);
        }
        system("pause");
        break;

    case 4: // * SALÁRIO DECRESCENTE
        system("cls");
        for (x = 0; x < stop; x++)
        {
            for (y = x + 1; y < stop; y++)
            {
                if (cad[x].salariofunc < cad[y].salariofunc) // VERIFICA QUAL SALÁRIO É MENOR
                {
                    aux = cad[x];
                    cad[x] = cad[y];
                    cad[y] = aux;

                    aux1 = cargo[x];
                    cargo[x] = cargo[y];
                    cargo[y] = aux1;
                }
            }
        }

        for (i = 0; i < stop; i++) // EXIBIÇÃO POR ORDEM DECRESCENTE DO SALÁRIO
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].nomefunc, cad[i].salariofunc);
        }
        system("pause");
        break;
    }
}