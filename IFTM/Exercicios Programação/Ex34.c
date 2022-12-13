#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1;

    printf("Digite um número: ");
    scanf("%d", &n1);

    while (n1 != 0)
    {
        if (n1 == 1)

            printf("Segunda feira\n");

        if (n1 == 2)

            printf("Terça feira\n");

        if (n1 == 3)

            printf("Quarta feira\n");

        if (n1 == 4)

            printf("Quinta feira\n");

        if (n1 == 5)

            printf("Sexta feira\n");

        if (n1 == 6)

            printf("Sábado\n");

        if (n1 == 7)

            printf("Domingo\n");

        if (n1 > 7)

            printf("Dia inválido\n");
        printf("Digite outro número: ");
        scanf("%d", &n1);
    }
}
