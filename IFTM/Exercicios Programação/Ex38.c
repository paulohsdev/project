#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1, n2, n3, primeironum, segundonum, terceironum;

    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro n�mero: ");
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

    printf("O primeiro n�mero �: %d\n", primeironum);
    printf("O segundo n�mero �: %d\n", segundonum);
    printf("O terceiro n�mero �: %d", terceironum);
}