#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1, n2, n3, primeironum, segundonum, terceironum;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        primeironum = n1;
    }
    if (n2 > n1 && n2 > n3)
    {
        primeironum = n2;
    }
    if (n3 > n2 && n3 > n1)
    {
        primeironum = n3;
    }
    if (n1 < n2 && n1 < n3)
    {
        terceironum = n1;
    }
    if (n2 < n1 && n2 < n3)
    {
        terceironum = n2;
    }
    if (n3 < n2 && n3 < n1)
    {
        terceironum = n3;
    }
    if (n1 > n2 && n1 < n3)
    {
        segundonum = n1;
    }
    if (n2 > n1 && n2 < n3)
    {
        segundonum = n2;
    }

    if (n3 > n2 && n3 < n1)
    {
        segundonum = n3;
    }

    printf("O primeiro número é: %d\n", primeironum);
    printf("O segundo número é: %d\n", segundonum);
    printf("O terceiro número é: %d", terceironum);
}