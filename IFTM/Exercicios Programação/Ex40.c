#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    float salario, juros, vlproduto, prestacoes, credito, vltotal, vlparcelas;

    printf("Digite o valor do seu sal�rio: \n");
    scanf("%f", &salario);

    printf("Qual valor do produto? \n");
    scanf("%f", &vlproduto);

    printf("Em quantas vezes quer dividir? \n");
    scanf("%f", &prestacoes);

    printf("Qual a taxa de juros? \n");
    scanf("%f", &juros);

    credito = salario / 3;
    vlparcelas = vlproduto / prestacoes;
    juros = (juros / 100) * vlparcelas * prestacoes;
    vltotal = vlproduto + juros;

    if (vlparcelas > credito)
    {
        printf("Voc� n�o tem limite de cr�dito liberado");
    }

    if (vlparcelas < credito)
    {
        printf("O cr�dito est� liberado para voc� usar\n");
        printf("O cr�dito liberado � de R$ %.2f reais.\n", vlproduto);
        printf("O valor das parcelas � de: R$ %.2f reais.\n", vltotal / 10);

        // printf("O valor total de juros � de R$%.2f reais.\n",juros);
        // printf("O valor total pago ser� de: R$ %.2f reais.\n",vltotal);
    }
}