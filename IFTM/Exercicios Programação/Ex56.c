#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float x, soma;

    printf("Digite um n�mero inteiro: ");
    scanf("%f", &x);

    soma = 8 / (2 - x);
    printf("f(%.0f) = : %.2f", x, soma);
}