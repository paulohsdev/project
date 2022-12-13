#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    char operacao[20];
    float soma, subtracao, divisao, multiplicacao, n1, n2, total;

    printf("Qual operação você quer realizar? \n");
    scanf("%s", &operacao);

    printf("Digite o primeiro número: \n");
    scanf("%f", &n1);

    printf("Digite o segundo número: \n");
    scanf("%f", &n2);

    soma = strcmp(operacao, "soma");
    subtracao = strcmp(operacao, "subtracao");
    divisao = strcmp(operacao, "divisao");
    multiplicacao = strcmp(operacao, "multiplicacao");

    if (soma == 0)
    {
        total = n1 + n2;
        printf("%.0f", total);
    }
    if (subtracao == 0)
    {
        total = n1 - n2;
        printf("%.0f", total);
    }
    if (divisao == 0)
    {
        total = n1 / n2;
        printf("%.0f", total);
    }
    if (multiplicacao == 0)
    {
        total = n1 * n2;
        printf("%.0f", total);
    }
}
