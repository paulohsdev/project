#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float salario, taxa1, taxa2, res;

    printf("Qual seu salário? ");
    scanf("%f", &salario);

    taxa1 = salario * (2.0 / 100);
    taxa2 = salario * (2.5 / 100);

    res = salario - taxa1 - taxa2;

    printf("Seu salário líquido é: R$ %.2f reais.", res);

    return 0;
}