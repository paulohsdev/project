#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    float produto, parceladoem2;
    int formapagamento;

    produto = 500;

    printf("Escolha a forma de pagamento: 1 A vista | 2 a vista no débito | 3 a vista no cartão de crédito | 4 em duas vezes | 5 em quatro vezes.\n");
    scanf("%d", &formapagamento);

    if (formapagamento == 1)
    {
        produto = produto - (produto * 0.1);
        printf("A vista em dinheiro ou chegue o valor é: R$ %.2f reais\n", produto);
    }
    if (formapagamento == 2)
    {
        produto = produto - (produto * 0.075);
        printf("A vista no cartão o valor é: R$ %.2f reias\n", produto);
    }
    if (formapagamento == 3)
    {
        produto = produto - (produto * 0.05);
        printf("A vista no cartão o valor é: R$ %.2f reais\n", produto);
    }
    if (formapagamento == 4)
    {
        produto = (produto / 2);
        printf("em duas parcelas de R$ %.2f reais", produto);
    }
    if (formapagamento == 5)
    {
        produto = produto + (produto * 0.095);
        produto = produto / 4;
        printf("O valor será 4 parcelas de R$ %.2f reais", produto);
    }
    return 0;
}