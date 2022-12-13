#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float salario, comissao, desconto, vendas, salaruiliq;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    printf("Digite o total das vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * (4.0 / 100);
    desconto = (salario * (2.25 / 100));
    salaruiliq = salario + comissao - desconto;

    printf("O valor da comissão desse mês é: R$%.2f, \nE o desconto do salário é: R$%.2f \nE o seu salário liquído é %.2f", comissao, desconto, salaruiliq);

    return 0;
}