#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, n, vet[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite os n�meros do vetor:");
        scanf("%d", &vet[i]);
    }

    printf("Digite um n�mero:");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (n == vet[i])
        {
            printf("O n�mero �: %d\n", vet[i]);
        }
        else
        {
            printf("0");
            break;
        }
    }
}
