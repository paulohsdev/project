#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    int n1;

    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    if (n1 < 0)
    {
        printf("n�mero negativo\n");
    }

    if (n1 > 0)
    {
        printf("n�mero positivo\n");
    }

    if (n1 == 0)
    {
        printf("n�mero nulo\n");
    }
}
