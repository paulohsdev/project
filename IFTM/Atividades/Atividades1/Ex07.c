#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float vlproduto;

    setlocale(LC_ALL, "");
    printf("Digite o valor do produto: ");
    scanf("%f", &vlproduto);

    if (vlproduto < 50)
    {
        vlproduto = (vlproduto * 0.05) + vlproduto;
    }
    if (vlproduto >= 50 && vlproduto <= 100)
    {
        vlproduto = (vlproduto * 0.10) + vlproduto;
    }
    else if (vlproduto > 100)
    {
        vlproduto = (vlproduto * 0.15) + vlproduto;
    }
    if (vlproduto < 80)
    {
        printf("Barato\n");
    }
    if (vlproduto > 80 && vlproduto < 120)
    {
        printf("Normal\n");
    }
    if (vlproduto > 120 && vlproduto < 200)
    {
        printf("Caro\n");
    }
    if (vlproduto > 200)
    {
        printf("Muito caro\n");
    }
    printf("O novo valor do produto ?: R$ %.2f\n", vlproduto);
    return 0;
}