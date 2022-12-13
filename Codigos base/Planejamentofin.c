#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 100

float receitas[SIZE], despesas[SIZE];
int painel, contdes = 0, contrec = 0, op, i;
char nomereceita[SIZE][50], nomedespesa[SIZE][50];

int main()
{

    static int linha;

    setlocale(LC_ALL, "");

    printf("1 - Cadastrar receitas: \n");
    printf("2 - Cadastrar despesas: \n");
    printf("3 - Visualizar despesas: \n");
    printf("4 - Visualizar receitas: \n");
    printf("5 - Sair: \n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        do
        {

            printf("Nome da receita: ");
            fflush(stdin);
            scanf("%[^\n]", nomereceita[linha]);
            printf("Digite o valor da receita: ");
            fflush(stdin);
            scanf("%f", &receitas[linha]);
            system("cls");
            printf("1 - Continuar cadastro: \n");
            printf("2 - sair: \n");
            scanf("%d", &painel);
            contrec++;
            linha++;
        } while (painel == 1);
        return main();
    case 2:
        do
        {
            system("cls");
            printf("Nome da despesa: ");
            fflush(stdin);
            // fgets(nomedespesa[linha], 100, stdin);
            scanf("%[^\n]", nomedespesa[linha]);
            system("cls");
            printf("Digite o valor da despesa: ");
            scanf("%f", &despesas[linha]);
            system("cls");
            printf("1 - Continuar cadastro:\n");
            printf("2 - Sair:");
            scanf("%d", &painel);
            system("cls");
            fflush(stdin);
            contdes++;
            linha++;

        } while (painel == 1);
        return main();
    case 3:
        for (i = 0; i < contdes; i++)
        {
            printf("\n%s: R$%.2f", nomedespesa[i], despesas[i]);
        }
        break;
    case 4:
        for (i = 0; i < contrec; i++)
        {
            printf("%s: R$ %.2f\n", nomereceita[i], receitas[i]);
        }
        break;
    }
}