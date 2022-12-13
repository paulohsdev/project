#include <string.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "");

    int a[10], b[5], i, j, aux = 0, vet2 = 0;

    printf("Valores do 1º Vetor\n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &a[i]);
    }

    printf("Valores do 2º Vetor\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++)
    {
        vet2 = 0;
        if (a[i] % 2 == 0)
        {
            for (j = 0; j < 5; j++)
            {
                vet2 = vet2 + b[j];
            }
            vet2 = vet2 + a[i];
        }
        if (vet2 != 0)
        {
            printf("O valor de vet2 é %d\n", vet2);
        }
    }
    for (i = 0; i < 10; i++)
    {
        aux = 0;
        if (a[i] % 2 != 0)
        {
            for (j = 0; j < 5; j++)
            {
                if (a[i] % b[j] == 0)
                    aux++;
            }
        }
        if (aux != 0)
            printf("O número de divisores de %d ímpar é: %d\n", a[i], aux);
    }
}