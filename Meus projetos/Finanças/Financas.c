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
    float investimento, juros, rendimento, vlinvestido, rendimentomensal, total, totalinvestido, montante;
    int periodo;

} vlfuturo;
vlfuturo vf;

typedef struct
{
    float montante, txjuros, subtotal, juros, rendimentoliq, rendimentomensal, vlimposto;
    int periodo;

} juroscompostoss;
juroscompostoss jc;

typedef struct
{
    float capitalaplicado, vlfinal, juros, txjuros, rendimento;
    int tempo;
} jurossimpless;
jurossimpless js;

void cadastrodespesa();
void cadastroreceitas();
void valorfuturo();
void juroscompostos();
void jurossimples();

int main()
{
    setlocale(LC_ALL, "");
    int op;

    printf("1 -  Cadastrar despesas\n");
    printf("2 -  Cadastrar receitas\n");
    printf("3 -  Valor futuro do investimento mensal\n");
    printf("4 -  Juros compostos\n");
    printf("5 -  Juros simples\n");
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
        valorfuturo();
        break;
    case 4:
        juroscompostos();
        break;
    case 5:
        jurossimples();
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
void valorfuturo() // VALOR FUTURO DE UMA APLICAÇÃI MENSAL
{
    printf("Digite o valor que será investido mensalmente: ");
    scanf("%f", &vf.investimento);

    printf("Digite quantos meses irá investir: ");
    scanf("%d", &vf.periodo);

    printf("Digite a taxa de juros anual: ");
    scanf("%f", &vf.juros);

    vf.juros = (vf.juros / 100) / 12;
    vf.totalinvestido = vf.investimento * vf.periodo;

    vf.total = (vf.investimento * (pow((1 + vf.juros), vf.periodo) - 1) / vf.juros);
    vf.rendimento = vf.total - vf.totalinvestido;
    vf.vlinvestido = vf.total - vf.rendimento;
    vf.rendimentomensal = vf.rendimento / 12;

    system("cls");
    printf("O valor total com juros será de: R$ %.2f reais\n", vf.total);
    printf("O valor dos rendimentos será: R$ %.2f reais \n", vf.rendimento);
    printf("O valor investido foi: R$ %.2f reais\n", vf.vlinvestido);
    printf("O rendimento mensal será de: %.2f \n\n", vf.rendimentomensal);
}

void juroscompostos()
{
    printf("Qual o montante inical? \n");
    scanf("%f", &jc.montante);

    printf("Quantos meses de investimento? \n");
    scanf("%d", &jc.periodo);

    printf("Qual a taxa de juros anual? \n");
    scanf("%f", &jc.txjuros);

    jc.txjuros = jc.txjuros / 100 / 12;
    jc.subtotal = jc.montante * pow((1 + jc.txjuros), jc.periodo);
    jc.juros = jc.subtotal - jc.montante;
    jc.vlimposto = jc.juros * 0.20;
    jc.rendimentoliq = jc.juros - (jc.juros * 0.20);
    jc.rendimentomensal = jc.rendimentoliq / 12;

    printf("O valor total será de: R$%.2f\n", jc.subtotal);
    printf("O rendimento foi de R$ %.2f\n", jc.juros);
    printf("O valor do imposto de renda será de: R$%.2f\n", jc.vlimposto);
    printf("O rendimento líquido será de R$ %.2f\n", jc.rendimentoliq);
    printf("O rendimento mensal será de: %.2f \n\n", jc.rendimentomensal);
}
void jurossimples()
{

    printf("Digite o valor do investimento: ");
    scanf("%f", &js.capitalaplicado);

    printf("Qual a taxa de juros anual: ");
    scanf("%f", &js.txjuros);

    printf("Quanto tempo de investimento: ");
    scanf("%d", &js.tempo);

    js.txjuros = js.txjuros / 100;

    js.vlfinal = js.capitalaplicado * js.txjuros * js.tempo;
    js.rendimento = js.vlfinal - js.capitalaplicado;

    printf("O valor final e de R$%.2f\n", js.vlfinal);
    printf("O rendimento foi de: R$%.2f\n", js.rendimento);
}