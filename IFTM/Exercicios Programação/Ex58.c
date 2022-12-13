#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int cpf;
    char nome[15];
    float rendimento, irrf, contprevidenciaria, desmedicas, deducoes, basecalculo, impostodevido, parceladeduzir, restituicao, dependentes;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite seu CPF: ");
    scanf("%d", &cpf);

    printf("Digite seu rendimento anual: ");
    scanf("%f", &rendimento);

    printf("Digite o IRRF mensal: ");
    scanf("%f", &irrf);

    printf("Digite o valor mensal da contribuição previdenciária: ");
    scanf("%f", &contprevidenciaria);

    printf("Digite suas despesas médicas: ");
    scanf("%f", &desmedicas);

    printf("Digite o número de dependentes: ");
    scanf("%f", &dependentes);

    irrf = irrf * 12;
    contprevidenciaria = contprevidenciaria * 12;
    dependentes = dependentes * 1080;
    deducoes = contprevidenciaria + desmedicas + dependentes;
    basecalculo = rendimento - deducoes;

    if (basecalculo > 10800 && basecalculo <= 21600)
    {
        parceladeduzir = 1620;
        impostodevido = (basecalculo * 0.15) - parceladeduzir;
    }
    if (basecalculo > 21600)
    {
        parceladeduzir = 3780;
        impostodevido = (basecalculo * 0.25) - parceladeduzir;
    }

    if (impostodevido - irrf < 0)
    {
        restituicao = (impostodevido - irrf) * -1;
        printf("Você tem o valor de R$%.2f de restituição\n", restituicao);
    }
    if (impostodevido - irrf > 0)
    {
        printf("Você de o valor de R$%.2f de imposto\n", impostodevido);
    }

    printf("O IRRF é: R$%.2f\n", irrf);
    printf("O valor da contribuição da previdencia é: R$%.2f\n", contprevidenciaria);
    printf("O valor dos dependentes é: R$%.2f\n", dependentes);
    printf("O valor das deduções é: R$%.2f\n", deducoes);
    printf("A base de calculo é: %.2f\n", basecalculo);
}