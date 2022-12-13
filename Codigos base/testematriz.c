#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int mat[3][3];
    int i, j, mult3 = 1;
    int soma = 0;
    system("cls");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    }
    printf("NÚMEROS PARES:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                printf("[%d] ", mat[i][j]);
            }
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            mult3 = mult3 * mat[i][2];
        }
    }
    printf("\nO valor da multiplicação é: %d\n", mult3);

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i == j)
                printf("[%d]", mat[i][j]);
        }
    }
}