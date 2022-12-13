#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float vlcompra, vlvenda;

    printf("Digite o valor de compra: ");
    scanf("%f", &vlcompra);

    if (vlcompra < 10)
    {
        vlvenda = vlcompra + (vlcompra * 0.7);
    }
    if (vlcompra >= 10 && vlcompra < 30)
    {
        vlvenda = vlcompra + (vlcompra * 0.5);
    }
    if (vlcompra >= 30 && vlcompra < 50)
    {
        vlvenda = vlcompra + (vlcompra * 0.4);
    }
    if (vlcompra >= 50)
    {
        vlvenda = vlcompra + (vlcompra * 0.3);
    }

    printf("O valor de compra foi R$%.2f reais\n", vlcompra);
    printf("O valor de venda foi R$%.2f reais\n", vlvenda);
}