#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    char produto[15];
    float valor, valorvenda;

    printf("Digite o nome do produto: ");
    scanf("%s", &produto);

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    while (valor != 0)
    {

        if (valor < 10)
        {
            valorvenda = valor + (valor * 0.7);
            printf("O valor de venda é: %.2f\n", valorvenda);
        }
        if (valor >= 10 && valor < 30)
        {
            valorvenda = valor + (valor * 0.5);
            printf("O valor de venda é: %.2f\n", valorvenda);
        }
        if (valor >= 30 && valor < 50)
        {
            valorvenda = valor + (valor * 0.4);
            printf("O valor de venda é: %.2f\n", valorvenda);
        }
        if (valor >= 30 && valor < 50)
        {
            valorvenda = valor + (valor * 0.3);
            printf("O valor de venda é: %.2f\n", valorvenda);
        }

        printf("Digite o nome do produto: ");
        scanf("%s", &produto);

        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
    }
}
