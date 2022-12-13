#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, j, l, n[3][3], menor, maior, posimenor;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {

        menor = n[i][0];
        posimenor = 0;

        for (j = 0; j < 3; j++)
        {
            if (n[i][j] < menor)
            {
                menor = n[i][j];
                posimenor = j;
            }
        }

        maior = menor;
        for (l = 0; l < 3; l++)
        {
            if (n[l][posimenor] > maior)
            {
                maior = n[l][posimenor];
            }
        }
        if (maior == menor)
            printf("%d\n", menor);
    }

    return 0;
}