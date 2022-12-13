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

void mediasalarial()
{
    int i, aux = 0;
    float media = 0;

    for (i = 0; i < cad[i].stop; i++)
    {
        aux++;
        media = cad[i].salariofunc + media;
        printf("O valor da média  é: %.2f\n", media);
    }
    
    media = media / aux;
    printf("A média salarial de todos os funcionários é: R$%.2f\n", media);
    system("pause");
}