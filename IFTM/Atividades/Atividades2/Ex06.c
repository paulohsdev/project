#include <string.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    int a[3][4], i, j, aux = 0, npares = 0, somaimpar = 0;
    float media;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            aux++;
            scanf("%d", &a[i][j]);
            media = (a[i][j] + media);
        }
    }

    media = media / aux;

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                npares++;
            }
            else
            {
                somaimpar = somaimpar + a[i][j];
            }
            printf("%d\n", a[i][j]);
        }
    }
    printf("A quantidade de n�meros pares � %d\n", npares);
    printf("A soma dos n�meros impares � %d\n", somaimpar);
    printf("A m�dia de todos os n�meros � %.2f\n", media);
}