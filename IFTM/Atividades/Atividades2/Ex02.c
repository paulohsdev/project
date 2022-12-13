#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");
    int cod[100], op, i, aux = 0, qntestoque[100], codpesquisa, vendido;
    float vlproduto[100], faturamento;

    printf("1 - Cadastrar produto: \n");
    printf("2 - Estoque:\n");
    printf("3 - Mostrar produtos cadastrados:\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        for (i = 0; i <= aux; i++)
        {
            aux++;
            system("cls");
            printf("Digite o codigo do produto: ");
            scanf("%d", &cod[i]);

            printf("Digite o valor do produto: ");
            scanf("%f", &vlproduto[i]);

            printf("Quantidade do produto: ");
            scanf("%d", &qntestoque[i]);

            system("cls");
            printf("1 - Continuar \n");
            printf("2 - Sair \n");
            scanf("%d", &op);
            if (op == 2)
                break;
        }
    case 2:

        printf("Digite o codigo do produto: ");
        scanf("%d", &codpesquisa);

        for (i = 0; i < aux; i++)
        {
            if (cod[i] == codpesquisa)
            {
                printf("Digite quantas unidades foram vendidas: ");
                scanf("%d", &vendido);
                qntestoque[i] = qntestoque[i] - vendido;
                faturamento = faturamento + (vlproduto[i] * vendido);
                printf("Restam %d no estoque\n", qntestoque[i]);
                printf("O faturamento das vendas foi: %.2f", faturamento);
            }
        }
        break;

    case 3:
        // system("cls");
        for (i = 0; i < aux; i++)
        {
            printf("\n\nCódigo: %d\nValor:%.2f\nQnatidade no estoque: %d unidades", cod[i], vlproduto[i], qntestoque[i]);
        }
    }
}