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
char aux[50];

void ordenacao()
{

    int op, i, j, x, y, r, aux1;
    float aux2;

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

                if (strcmp(cad[x].nomefunc, cad[y].nomefunc) > 0)
                {
                    fflush(stdin);
                    strcpy(aux, cad[x].cidade);
                    strcpy(cad[x].cidade, cad[y].cidade);
                    strcpy(cad[y].cidade, aux);

                    strcpy(aux, cad[x].nomefunc);
                    strcpy(cad[x].nomefunc, cad[y].nomefunc);
                    strcpy(cad[y].nomefunc, aux);

                    strcpy(aux, cad[x].rua);
                    strcpy(cad[x].rua, cad[y].rua);
                    strcpy(cad[y].rua, aux);

                    strcpy(aux, cad[x].bairro);
                    strcpy(cad[x].bairro, cad[y].bairro);
                    strcpy(cad[y].bairro, aux);

                    strcpy(aux, cad[x].estado);
                    strcpy(cad[x].estado, cad[y].estado);
                    strcpy(cad[y].estado, aux);

                    aux1 = cad[x].cep;
                    cad[x].cep = cad[y].cep;
                    cad[y].cep = aux1;

                    aux1 = cad[x].codcargo;
                    cad[x].codcargo = cad[y].codcargo;
                    cad[y].codcargo = aux1;

                    aux1 = cad[x].codfunc;
                    cad[x].codfunc = cad[y].codfunc;
                    cad[y].codfunc = aux1;

                    aux1 = cad[x].nrua;
                    cad[x].nrua = cad[y].nrua;
                    cad[y].nrua = aux1;

                    aux2 = cad[x].salariofunc;
                    cad[x].salariofunc = cad[y].salariofunc;
                    cad[y].salariofunc = aux2;
                }
            }
        }

        for (i = 0; i < cad[i].stop; i++)
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
        for (x = 0; cad[x].codfunc != 0; x++)
        {
            for (y = x + 1; cad[y].codfunc != 0; y++)
            {
                if (strcmp(cad[x].nomefunc, cad[y].nomefunc) < 0)
                {
                    fflush(stdin);
                    strcpy(aux, cad[x].cidade);
                    strcpy(cad[x].cidade, cad[y].cidade);
                    strcpy(cad[y].cidade, aux);

                    strcpy(aux, cad[x].nomefunc);
                    strcpy(cad[x].nomefunc, cad[y].nomefunc);
                    strcpy(cad[y].nomefunc, aux);

                    strcpy(aux, cad[x].rua);
                    strcpy(cad[x].rua, cad[y].rua);
                    strcpy(cad[y].rua, aux);

                    strcpy(aux, cad[x].bairro);
                    strcpy(cad[x].bairro, cad[y].bairro);
                    strcpy(cad[y].bairro, aux);

                    strcpy(aux, cad[x].estado);
                    strcpy(cad[x].estado, cad[y].estado);
                    strcpy(cad[y].estado, aux);

                    aux1 = cad[x].cep;
                    cad[x].cep = cad[y].cep;
                    cad[y].cep = aux1;

                    aux1 = cad[x].codcargo;
                    cad[x].codcargo = cad[y].codcargo;
                    cad[y].codcargo = aux1;

                    aux1 = cad[x].codfunc;
                    cad[x].codfunc = cad[y].codfunc;
                    cad[y].codfunc = aux1;

                    aux1 = cad[x].nrua;
                    cad[x].nrua = cad[y].nrua;
                    cad[y].nrua = aux1;

                    aux2 = cad[x].salariofunc;
                    cad[x].salariofunc = cad[y].salariofunc;
                    cad[y].salariofunc = aux2;
                }
            }
        }
        for (i = 0; i < cad[i].stop; i++)
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
    case 3: // * ORDENAR SALÁRIO CRESCENTE
        system("cls");
        for (x = 0; cad[x].codfunc != 0; x++)
        {
            for (y = x + 1; cad[y].codfunc != 0; y++)
            {
                if (cad[x].salariofunc > cad[y].salariofunc)
                {
                    fflush(stdin);
                    strcpy(aux, cad[x].cidade);
                    strcpy(cad[x].cidade, cad[y].cidade);
                    strcpy(cad[y].cidade, aux);

                    strcpy(aux, cad[x].nomefunc);
                    strcpy(cad[x].nomefunc, cad[y].nomefunc);
                    strcpy(cad[y].nomefunc, aux);

                    strcpy(aux, cad[x].rua);
                    strcpy(cad[x].rua, cad[y].rua);
                    strcpy(cad[y].rua, aux);

                    strcpy(aux, cad[x].bairro);
                    strcpy(cad[x].bairro, cad[y].bairro);
                    strcpy(cad[y].bairro, aux);

                    strcpy(aux, cad[x].estado);
                    strcpy(cad[x].estado, cad[y].estado);
                    strcpy(cad[y].estado, aux);

                    aux1 = cad[x].cep;
                    cad[x].cep = cad[y].cep;
                    cad[y].cep = aux1;

                    aux1 = cad[x].codcargo;
                    cad[x].codcargo = cad[y].codcargo;
                    cad[y].codcargo = aux1;

                    aux1 = cad[x].codfunc;
                    cad[x].codfunc = cad[y].codfunc;
                    cad[y].codfunc = aux1;

                    aux1 = cad[x].nrua;
                    cad[x].nrua = cad[y].nrua;
                    cad[y].nrua = aux1;

                    aux2 = cad[x].salariofunc;
                    cad[x].salariofunc = cad[y].salariofunc;
                    cad[y].salariofunc = aux2;
                }
            }
        }

        for (i = 0; cad[i].codfunc != 0; i++)
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].nomefunc, cad[i].salariofunc);
        }
        system("pause");
        break;

    case 4: // * SALÁRIO DECRESCENTE
        system("cls");
        for (x = 0; cad[x].codfunc != 0; x++)
        {
            for (y = x + 1; cad[y].codfunc != 0; y++)
            {
                if (cad[x].salariofunc < cad[y].salariofunc)
                {
                    fflush(stdin);
                    strcpy(aux, cad[x].cidade);
                    strcpy(cad[x].cidade, cad[y].cidade);
                    strcpy(cad[y].cidade, aux);

                    strcpy(aux, cad[x].nomefunc);
                    strcpy(cad[x].nomefunc, cad[y].nomefunc);
                    strcpy(cad[y].nomefunc, aux);

                    strcpy(aux, cad[x].rua);
                    strcpy(cad[x].rua, cad[y].rua);
                    strcpy(cad[y].rua, aux);

                    strcpy(aux, cad[x].bairro);
                    strcpy(cad[x].bairro, cad[y].bairro);
                    strcpy(cad[y].bairro, aux);

                    strcpy(aux, cad[x].estado);
                    strcpy(cad[x].estado, cad[y].estado);
                    strcpy(cad[y].estado, aux);

                    aux1 = cad[x].cep;
                    cad[x].cep = cad[y].cep;
                    cad[y].cep = aux1;

                    aux1 = cad[x].codcargo;
                    cad[x].codcargo = cad[y].codcargo;
                    cad[y].codcargo = aux1;

                    aux1 = cad[x].codfunc;
                    cad[x].codfunc = cad[y].codfunc;
                    cad[y].codfunc = aux1;

                    aux1 = cad[x].nrua;
                    cad[x].nrua = cad[y].nrua;
                    cad[y].nrua = aux1;

                    aux2 = cad[x].salariofunc;
                    cad[x].salariofunc = cad[y].salariofunc;
                    cad[y].salariofunc = aux2;
                }
            }
        }

        for (i = 0; cad[i].codfunc != 0; i++)
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].nomefunc, cad[i].salariofunc);
        }
        system("pause");
        break;
    }
}