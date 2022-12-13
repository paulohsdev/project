#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, j, aux = 0, aux1, maiorvendasemana;
    float vlvenda[12][4], vlmes[12], vlsemana[48], maiorvalor = 0, vendaanual;
    char mes[50][12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    vlmes[0] = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("Digite o valor de venda da semana %d \n", aux);
            scanf("%f", &vlvenda[i][j]);

            vlsemana[aux] = vlvenda[i][j];
            vlmes[i] = vlmes[i] + vlsemana[aux];

            aux++;
        }
        vendaanual = vlmes[i] + vendaanual;
    }

    for (i = 0; i < 12; i++)
    {
        if (vlsemana[i] > maiorvalor)
        {
            maiorvalor = vlsemana[i];
            maiorvendasemana = i;
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("O valor do mês %s foi R$%.2f\n", mes[i], vlmes[i]);
    }

    for (i = 0; i < 12; i++)
    {
        printf("O valor vendido na semana %d foi %.2f\n", i + 1, vlsemana[i]);
    }

    printf("A semana com maior venda foi: %d\n", maiorvendasemana + 1);
    printf("O total anual foi: %.2f", vendaanual);
}