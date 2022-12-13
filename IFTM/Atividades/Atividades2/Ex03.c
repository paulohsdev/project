
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, aux = 0, aux1;
    float vendas[100], pcomissao[100], comissao[100], totalvendas, maiorcomissao, menorcomissao;
    char nomevendedor[10][50];

    system("cls");

    for (i = 0; i < 3; i++)
    {
        system("cls");
        printf("Digite o nome do vendedor: ");
        scanf("%s", &nomevendedor[i]);

        printf("Digite valor de vendas do vendedor: ");
        scanf("%f", &vendas[i]);

        printf("Digite o %% de comissão: ");
        scanf("%f", &pcomissao[i]);

        comissao[i] = pcomissao[i] / 100 * vendas[i];
        totalvendas = totalvendas + vendas[i];

        if (i == 0)
        {
            menorcomissao = comissao[i];
            maiorcomissao = comissao[i];
        }
        if (comissao[i] > maiorcomissao)
        {
            maiorcomissao = comissao[i];
            aux++;
        }
        if (comissao[i] < maiorcomissao)
        {
            menorcomissao = comissao[i];
            aux1++;
        }
    }

    printf("%s Tem a maior comissão R$%.2f\n", nomevendedor[aux], maiorcomissao);
    printf("%s Tem a menor comissão R$%.2f\n", nomevendedor[aux1], menorcomissao);
    printf("O total de todas as vendas é: R$%.2f\n", totalvendas);

    for (i = 0; i < 3; i++)
    {
        printf("\n\nNome: %s\nVendas: R$%.2f\nComissão: R$%.2f", nomevendedor[i], vendas[i], comissao[i]);
    }
}