#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

typedef struct
{
    int codcargo;
    float salario, somacargo;
} car;

typedef struct
{
    char nomefunc[50], rua[50], bairro[50], estado[3], cidade[50];
    int codfunc, codcargo, stop, nrua, cep;
    float salariofunc, mediasalarial;
} cadastro;

cadastro cad[10];
car cargo[3];

void relatorio()
{

    int i;
    setlocale(LC_ALL, "");
    system("cls");

    for (i = 0; i < cad[i].stop; i++)
    {
        printf("Nome: %s", cad[i].nomefunc);
        printf("Codigo: %d\n", cad[i].codfunc);
        printf("Salario: %.2f\n\n", cad[i].salariofunc);
    }
    system("pause");
}