#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

struct despesas
{
    char nome[50];
    float valor;
};

int main()
{
    struct despesas des[50];
    setlocale(LC_ALL, "");

    int painel, op, i = 0, stop = 0, cont;
    float subtotal = 0;
    system("cls");

    printf(" 1 - Cadastrar despesas\n");
    printf(" 2 - Mostrar despesas\n");
    printf(" 3 - Mostrar Total de despesas\n");
    printf(" 4 - Sair\n");
    scanf("%d", &painel);
    printf("teste");

    while (painel != 4)
    {

        switch (painel)
        {
        case 1:
            do
            {
                system("cls");
                stop++;
                printf("Digite o nome da despesa: ");
                scanf("%s", &des[i].nome);

                printf("Digite o valor da despesa: ");
                scanf("%f", &des[i].valor);

                subtotal = des[i].valor + subtotal;
                i++;

                printf("1 - Continuar\n");
                printf("2 - Sair\n");
                scanf("%d", &cont);
            } while (cont != 2);
            break;
        case 2:
            system("cls");
            for (i = 0; i < stop; i++)
            {
                printf("Despesa: %s\n", des[i].nome);
                printf("Valor: %.2f\n", des[i].valor);
                printf("\n");
            }
            break;
        case 3:
            system("cls");
            printf("O valor do subtotal é %.2f\n\n", subtotal);
            break;
        }
        printf(" 1 - Entrar no sistema\n");
        printf(" 2 - Mostrar despesas\n");
        printf(" 3 - Mostrar Total de despesas\n");
        printf(" 4 - Sair\n");
        scanf("%d", &painel);
    }
}
