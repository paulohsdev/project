#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

typedef struct
{
    char nome[50];
    float vldespesa;
} despesas;
despesas des[3][3];

typedef struct
{
    char nome[50];
    float vlreceita;
} receitas;
receitas rec[3][3];

typedef struct
{
    float investimento, juros, rendimento, vlinvestido, rendimentomensal, total, totalinvestido;
    int periodo;

} jurossimples;
jurossimples js;

void cadastrodespesa();
void cadastroreceitas();
void juroscompostos();

int main()
{
    setlocale(LC_ALL, "");
    int op;

    printf("1 -  Cadastrar despesas\n");
    printf("2 -  Cadastrar receitas\n");
    printf("3 -  Juros compostos\n");
    printf("4 -  Mostrar receitas\n");
    printf("5 -  Sair\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        cadastrodespesa();
        break;
    case 2:
        cadastroreceitas();
        break;
    case 3:
        juroscompostos();
        break;
    case 4:
        break;
    case 5:
        break;
    }
}
void cadastrodespesa()
{
    setlocale(LC_ALL, "");
    int i, j;
    char mes[12][50];
    float totalmes[3] = {0, 0, 0}, total = 0;

    for (i = 0; i < 2; i++)
    {
        system("cls");
        printf("Digite o mês: ");
        scanf("%s", mes[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite o nome da despesa: ");
            scanf("%s", des[i][j].nome);

            printf("Digite o valor da despesa: ");
            scanf("%f", &des[i][j].vldespesa);
            total = total + des[i][j].vldespesa;
            totalmes[i] = totalmes[i] + des[i][j].vldespesa;
            system("cls");
        }
    }
    system("cls");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Nome: %s\n", des[i][j].nome);
            printf("Valor: %.2f\n", des[i][j].vldespesa);
            printf("Mês: %s\n", mes[i]);
        }
        printf("Total mes %s: R$%.2f\n", mes[i], totalmes[i]);
    }
    printf("Total Anual: %.2f\n", total);
}
void cadastroreceitas()
{
    setlocale(LC_ALL, "");
    int i, j;
    char mes[12][50];
    float totalmes[3] = {0, 0, 0}, total = 0;

    for (i = 0; i < 2; i++)
    {
        system("cls");
        printf("Digite o mês: ");
        scanf("%s", mes[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite o nome da receita: ");
            scanf("%s", rec[i][j].nome);

            printf("Digite o valor da receita: ");
            scanf("%f", &rec[i][j].vlreceita);
            total = total + rec[i][j].vlreceita;
            totalmes[i] = totalmes[i] + rec[i][j].vlreceita;
            system("cls");
        }
    }
    system("cls");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Nome: %s\n", rec[i][j].nome);
            printf("Valor: %.2f\n", rec[i][j].vlreceita);
            printf("Mês: %s\n", mes[i]);
        }
        printf("Total mes %s: R$%.2f\n", mes[i], totalmes[i]);
    }
    printf("Total Anual: %.2f\n", total);
}
void juroscompostos()
{
    float totalinvestido = 0;
    printf("Digite o valor que será investido mensalmente: ");
    scanf("%f", &js.investimento);

    printf("Digite quantos meses irá investir: ");
    scanf("%d", &js.periodo);

    printf("Digite a taxa de juros anual: ");
    scanf("%f", &js.juros);

    js.juros = js.juros / 100 / 12;
    js.totalinvestido = js.investimento * js.periodo;

    js.total = js.investimento * ((pow((1 + js.juros), js.periodo) - 1) / js.juros);
    js.rendimento = js.total - js.totalinvestido;
    js.vlinvestido = js.total - js.rendimento;
    js.rendimentomensal = js.rendimento / 12;

    system("cls");
    printf("O valor total investido será de: R$ %.2f reais\n", js.totalinvestido);
    printf("O valor dos rendimentos será: R$ %.2f reais \n", js.rendimento);
    printf("O valor investido foi: R$ %.2f reais\n", js.vlinvestido);
    printf("O rendimento mensal será de: %.2f \n\n", js.rendimentomensal);
}
