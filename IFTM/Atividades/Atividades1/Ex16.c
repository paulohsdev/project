#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a1, a2, n, novo, indice;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    printf("Digite um n�mero : ");
    scanf("%d", &a1);
    printf("Digite um n�mero : ");
    scanf("%d", &a2);

    indice = 3;
    novo = 0;

    while (indice <= n)
    {

        if (indice % 2 == 0)
        {

            novo = a2 - a1; // n�meros pares subtra��o
        }
        else
        {
            novo = a2 + a1; // n�meros impares soma
        }
        a1 = a2;
        a2 = novo;
        indice++;
        printf("%d\n", novo);
    }
    return 0;
}