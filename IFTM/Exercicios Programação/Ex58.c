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

    printf("Digite o valor mensal da contribui��o previdenci�ria: ");
    scanf("%f", &contprevidenciaria);

    printf("Digite suas despesas m�dicas: ");
    scanf("%f", &desmedicas);

    printf("Digite o n�mero de dependentes: ");
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
        printf("Voc� tem o valor de R$%.2f de restitui��o\n", restituicao);
    }
    if (impostodevido - irrf > 0)
    {
        printf("Voc� de o valor de R$%.2f de imposto\n", impostodevido);
    }

    printf("O IRRF �: R$%.2f\n", irrf);
    printf("O valor da contribui��o da previdencia �: R$%.2f\n", contprevidenciaria);
    printf("O valor dos dependentes �: R$%.2f\n", dependentes);
    printf("O valor das dedu��es �: R$%.2f\n", deducoes);
    printf("A base de calculo �: %.2f\n", basecalculo);
}