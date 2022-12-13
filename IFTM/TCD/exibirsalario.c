#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    int codcargo;
    float salario, somacargo;
} car;
car cargo[3];

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
    float salariofunc, salariocop, mediasalarial;
} cadastro;
cadastro cad[10];

void exibirsalario()
{
    setlocale(LC_ALL, "");

    int i, op;

    printf("1 - Soma dos cargos 1\n");
    printf("2 - Soma dos cargos 2\n");
    printf("3 - Soma dos cargos 3\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%.2f\n", cargo[0].somacargo);
        system("pause");
        break;
    case 2:
        printf("%.2f\n", cargo[1].somacargo);
        system("pause");
        break;
    case 3:
        printf("%.2f\n", cargo[2].somacargo);
        system("pause");
        break;
    }
}