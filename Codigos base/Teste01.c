#include <stdio.h>
#include <string.h>
#include <locale.h>

int somada(int c, int d)
{
    int c, d, somas;
    somas = c + d;

    return somas;
}

int main()
{

    setlocale(LC_ALL, "");

    int a, b, soma;

    printf("Digite um n�mero:");
    scanf("%d", &a);

    printf("Digite outro n�mero:");
    scanf("%d", &b);

    somada(a, b);
}