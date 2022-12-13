#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    float valor;
    int codproduto;
} cadastro;

typedef struct
{
    int produtoestoque;

} estoque;

int main()
{
    cadastro cadastro[10];
    estoque estoque[10][50];

    setlocale(LC_ALL, "");
    int i, j, totalestoques, aux, aux1, menorestoque = 9999;
    float maiorpreco = 0, totalarmazem[5];

    for (i = 0; i < 10; i++)
    {

        cadastro[i].codproduto = i + 1;
        printf("Código: %d\n", cadastro[i].codproduto);

        printf("Digite o valor do produto: ");
        scanf("%f", &cadastro[i].valor);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Estoque armazem [%d] código: %d: ", i + 1, cadastro[j].codproduto);
            scanf("%d", &estoque[i][j].produtoestoque);
            totalestoques = estoque[i][j].produtoestoque + totalestoques;
            totalarmazem[i] = totalarmazem[i] + (cadastro[j].valor * estoque[i][j].produtoestoque);
        }
    }

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 10; j++)
        {

            if (estoque[i][j].produtoestoque > maiorpreco)
            {
                aux1 = j;
                maiorpreco = cadastro[j].valor;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (estoque[i][j].produtoestoque < menorestoque)
            {
                printf("Quantidade 1: %d Quantidade 2: %d\n", estoque[i][j].produtoestoque, estoque[i][j + 1].produtoestoque);
                menorestoque = estoque[i][j].produtoestoque;
                aux = i;
            }
        }
    }

    printf("O total de produtos em todos os estoques é o de código: %d\n", totalestoques); // * OK
    printf("O produto que tem maior estoque é o código %d de valor R$%.2f\n", aux1 + 1, maiorpreco);
    printf("A quantidade do menor estoque é %d no armazém %d\n\n", menorestoque, aux + 1);

    for (i = 0; i < 5; i++)
    {
        printf("O total do armazém %d é: %.2f\n", i + 1, totalarmazem[i]);
    }
}