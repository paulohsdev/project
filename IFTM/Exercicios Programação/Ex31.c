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
        if (n1 % 3 == 0)
        {
            printf("� multiplo de 3\n");
        }

        if (n1 % 3 >= 1)
        {
            printf("N�o � multiplo de 3\n");
        }

        printf("Digite um n�mero: ");
        scanf("%d", &n1);
    }
}