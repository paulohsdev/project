#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int i, n[3][3], j, linha = 0, menor = 9999, maior = 0, coluna = 0;

    for (i = 0; i < 3; i++) // * CADASTRO
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (n[i][j] < menor)
            {
                linha = i;
                menor = n[i][j];
            }
        }
    }

    for (i = 0; i < 3; i++) // * MAIOR ELEMENTO DA LINHA ONDE SE ENCONTRA O MENOR ELEMENTO DA MATRIZ
    {
        for (j = 0; j < 3; j++)
        {
            if (maior < n[linha][j])
            {
                coluna = j;
                maior = n[linha][j];
            }
        }
    }
    printf("[%d] é o menor número\n", menor);
    printf("[%d] é o maior número\n", maior);
    printf("Linha: [%d]\nColuna: [%d]", linha + 1, coluna + 1);
}
