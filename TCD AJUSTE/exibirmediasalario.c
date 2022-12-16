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
    char nomefunc[50], rua[50], bairro[50], estado[3], cidade[50];
    int codfunc, codcargo, stop, nrua, cep;
    float salariofunc, mediasalarial;
} cadastro;
cadastro cad[10];
int stop;

cadastro aux;
car aux1;

void mediasalarial() // EXIBINDO A MÉDIA SALÁRIAL
{
    int i, aux = 0;
    float media = 0;

    for (i = 0; i < stop; i++)
    {
        aux++;
        media = cad[i].salariofunc + media;
    }

    media = media / aux;
    printf("A média salarial de todos os funcionários é: R$%.2f\n", media);
    system("pause");
}