#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a, b, soma;
    printf("Digite um n�mero:");
    scanf("%d", &a);
    printf("Digite outro n�mero:");
    scanf("%d", &b);

    soma = calc(a, b);
    printf("%d", soma);
}

calc(int a, int b)
{
    int resultado;

    resultado = a * b;

    return resultado;
}