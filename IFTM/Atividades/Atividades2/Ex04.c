#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    int a[5], b[5], x[10], i, u[10], j, d[10], k;

    printf("1º Vetor\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite os números: ");
        scanf("%d", &a[i]);
        x[i] = a[i];
    }

    printf("2º Vetor\n\n");
    for (i = 5; i < 10; i++)
    {
        printf("Digite os números: ");
        scanf("%d", &b[i]);
        x[i] = b[i];
    }
    system("cls");
    printf("\nINTERSECÇÃO AB: "); // * INTERSECÇÃO

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j < 10; j++)
        {
            if (x[i] == x[j])
            {
                printf("%d ", x[i]);
            }
        }
    }

    printf("\n\nUnião de AB: "); // * UNIÃO

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j < 10; j++)
        {
            if (x[i] != x[j])
            {
                u[i] = x[i];
                u[j] = x[j];
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j < 10; j++)
        {
            if (u[i] == u[j])
            {
                u[j] = 0;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (u[i] == 0)
        {
            continue;
        }
        printf("%d ", u[i]);
    }

    printf("\n\nDIFERENÇA DE A-B: \n"); //* DIFERENÇA

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j < 10; j++)
        {
            if (x[i] == x[j])
            {
                d[i] = 0;
                break;
            }
            else
            {
                d[i] = x[i];
                // d[i] = x[j];
                continue;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (d[i] == 0)
        {
            continue;
        }
        printf("%d ", d[i]);
    }
}