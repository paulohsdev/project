#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i;
    float a[5], b[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%f", &a[i]);

        if (i % 2 == 0)
        {
            b[i] = a[i] / 2;
        }
        else
        {
            b[i] = a[i] * 3;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("O valor de B é: %.2f\n", b[i]);
    }
}