#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1;

    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    while (n1 != 0)
    {
        if (n1 == 1)

            printf("Segunda feira\n");

        if (n1 == 2)

            printf("Ter�a feira\n");

        if (n1 == 3)

            printf("Quarta feira\n");

        if (n1 == 4)

            printf("Quinta feira\n");

        if (n1 == 5)

            printf("Sexta feira\n");

        if (n1 == 6)

            printf("S�bado\n");

        if (n1 == 7)

            printf("Domingo\n");

        if (n1 > 7)

            printf("Dia inv�lido\n");
        printf("Digite outro n�mero: ");
        scanf("%d", &n1);
    }
}
