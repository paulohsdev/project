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
        if (n1 % 3 == 0)
        {
            printf("É multiplo de 3\n");
        }

        if (n1 % 3 >= 1)
        {
            printf("Não é multiplo de 3\n");
        }

        printf("Digite um número: ");
        scanf("%d", &n1);
    }
}