#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    float saldo, emprestimo, vlparcelas;
    int parcelas;

    printf("Digite o seu saldo médio: ");
    scanf("%f", &saldo);

    if (saldo >= 0 && saldo <= 500)
    {
        printf("Seu saldo médio é de: R$ %.2f reais.\n", saldo);
        printf("Você não tem limite de crédito liberado!.\n");
    }
    if (saldo >= 501 && saldo <= 1000)
    {
        emprestimo = (saldo * 0.3) * 0.02 + (saldo / 3);
        printf("Quantas parcelas quer dividir? ");
        scanf("%d", &parcelas);
        vlparcelas = emprestimo / parcelas;
        printf("Seu saldo médio é de: R$ %.2f reais.\n", saldo);
        printf("O valor disponível para emprestimo é: R$ %.2f reais\n", emprestimo);
        printf("O valor das parcelas será de: R$ %.2f x %d vezes", vlparcelas, parcelas);
    }
    if (saldo >= 1001 && saldo <= 3000)
    {
        emprestimo = (saldo * 0.4) * 0.02 + (saldo / 3);
        printf("Quantas parcelas quer dividir? ");
        scanf("%d", &parcelas);
        vlparcelas = emprestimo / parcelas;
        printf("Seu saldo médio é de: R$ %.2f reais.\n", saldo);
        printf("O valor disponível para emprestimo é: R$ %.2f reais\n", emprestimo);
        printf("O valor das parcelas será de: R$ %.2f x %d vezes", vlparcelas, parcelas);
    }
    if (saldo >= 3001)
    {
        emprestimo = (saldo * 0.5) * 0.02 + (saldo / 3);
        printf("Quantas parcelas quer dividir? ");
        scanf("%d", &parcelas);
        vlparcelas = emprestimo / parcelas;
        printf("Seu saldo médio é de: R$ %.2f reais.\n", saldo);
        printf("O valor disponível para emprestimo é: R$ %.2f reais\n", emprestimo);
        printf("O valor das parcelas será de: R$ %.2f x %d vezes", vlparcelas, parcelas);
    }
}