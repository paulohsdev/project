#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

#define SIZE 10

typedef struct
{
    float receitas, despesas, total;
    int painel, contdes, contrec;
    char nomereceita, nomedespesa;

} financas;

typedef struct
{

    float periodo, juros, investimento, total, rendimento, totalinvestido, valorinvestido, rendimentomensal;

} investimento;

investimento inv;
financas fin;
int op, painel, contrec, contdes, i;

int main(void)
{
    int op;
    char nome[20];
    setlocale(LC_ALL, "");

    void juroscompostos();
    void jurossimples();
    void fiis();
    void receitasdespesas();
    void sair();
    void dieta();

    printf("Digite seu nome: ");
    gets(nome);
    printf("1 - Juros compostos: \n");
    printf("2 - Juros simples: \n");
    printf("3 - Investimento em FIIS\n");
    printf("4 - Calculo de receitas e despesas:\n");
    printf("5 - Dietas:\n");
    printf("6 - Sair:\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
        juroscompostos();
        break;
    case 2:
        jurossimples();
        break;
    case 3:
        fiis();
        break;
    case 4:
        receitasdespesas();
        break;
    case 5:
        dieta();
        break;
    }
}
void juroscompostos()
{

    printf("Digite o valor que será investido mensalmente: ");
    scanf("%f", &inv.investimento);

    printf("Digite quantos meses irá investir: ");
    scanf("%f", &inv.periodo);

    printf("Digite a taxa de juros anual: ");
    scanf("%f", &inv.juros);

    inv.juros = inv.juros / 100 / 12;
    inv.totalinvestido = inv.investimento * inv.periodo;

    inv.total = inv.investimento * ((pow((1 + inv.juros), inv.periodo) - 1) / inv.juros);
    inv.rendimento = inv.total - inv.totalinvestido;
    inv.valorinvestido = inv.total - inv.rendimento;
    inv.rendimentomensal = inv.rendimento / 12;

    system("cls");
    printf("O valor total será de: R$ %.2f reais\n", inv.total);
    printf("O valor dos rendimentos será: R$ %.2f reais \n", inv.rendimento);
    printf("O valor investido foi: R$ %.2f reais\n", inv.valorinvestido);
    printf("O rendimento mensal será de: %.2f \n\n", inv.rendimentomensal);
}
void jurossimples()
{

    float txjuros, montante, subtotal, juros, ir, rendimentoliq, rendimentomensal;
    int periodo;

    system("cls");

    printf("Qual o montante inical? \n");
    scanf("%f", &montante);

    printf("Quantos meses de investimento? \n");
    scanf("%d", &periodo);

    printf("Qual a taxa de juros anual? \n");
    scanf("%f", &txjuros);

    txjuros = txjuros / 100 / 12;
    subtotal = montante * pow((1 + txjuros), periodo);
    juros = subtotal - montante;
    // vlinvestido = montante - juros;
    ir = juros * 0.225;
    rendimentoliq = juros - ir;
    rendimentomensal = rendimentoliq / 12;

    system("cls");

    printf("O valor total será de: R$%.2f\n", subtotal);
    printf("O rendimento foi de R$ %.2f\n", juros);
    printf("O rendimento líquido será de R$ %.2f\n", rendimentoliq);
    printf("O rendimento mensal será de: %.2f \n\n", rendimentomensal);
}
void fiis()
{
    system("cls");
    float vlinvestimento, vlcota, vldividendos, qntcotas, rendividendos, dividendos;
    int meses, cotasmensais;

    printf("Digite quanto irá investir: \n");
    scanf("%f", &vlinvestimento);
    system("cls");
    printf("Digite o valor da cota: \n");
    scanf("%f", &vlcota);
    system("cls");
    printf("Digite o valor do dividendo: \n");
    scanf("%f", &dividendos);
    system("cls");
    printf("Quantos meses pretende investir:");
    scanf("%d", &meses);
    printf("Quantas cotas irá comprar por mês: ");
    scanf("%d", &cotasmensais);
    system("cls");
    rendividendos = dividendos * 100 / vlcota;
    qntcotas = vlinvestimento / vlcota;
    vldividendos = dividendos * qntcotas;
    printf("O dividend yiel é de: %%%.2f\n", rendividendos);
    printf("A quantidade de costas será de: %.2f\n", qntcotas);
    printf("Essas cotas irão gerar dividendos no valor de: R$%.2f mensais\n", vldividendos);
}
void receitasdespesas()
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
            scanf("%[^\n]", fin.nomereceita);
            printf("Digite o valor da receita: ");
            fflush(stdin);
            scanf("%f", &fin.receitas);
            system("cls");
            printf("1 - Continuar cadastro: \n");
            printf("2 - sair: \n");
            scanf("%d", &painel);
            contrec++;
            linha++;
        } while (painel == 1);
        return receitasdespesas();
    case 2:
        do
        {
            system("cls");
            printf("Nome da despesa: ");
            fflush(stdin);
            // fgets(nomedespesa[linha], 100, stdin);
            scanf("%[^\n]", fin.nomedespesa);
            system("cls");
            printf("Digite o valor da despesa: ");
            scanf("%f", &fin.despesas);
            system("cls");
            printf("1 - Continuar cadastro:\n");
            printf("2 - Sair:\n");
            scanf("%d", &painel);
            system("cls");
            fflush(stdin);
            fin.total = fin.total + fin.despesas;
            contdes++;

        } while (painel == 1);
        return receitasdespesas();
    case 3:
        printf("\n\t=================== Lista Das despesas ===================\n\t");
        printf("\n");
        for (i = 0; i < contdes; i++)
        {
            printf("%s: R$%.2f\n", fin.nomedespesa[i], fin.despesas[i]);
        }
        printf("\nO valot total é: %.2f", fin.total);
        break;
    case 4:
        for (i = 0; i < contrec; i++)
        {
            printf("\n%s: R$ %.2f", fin.nomereceita[i], fin.receitas[i]);
        }
        break;
    }
    printf("\n\n");
    system("pause");
}

void dieta() // * ADICIONAR VARIAVEIS
{

    float altura, peso, imc, geb, get, deficit, superavit, pesoideal, qntagua;
    char sexo[2], nome[50];
    int perda, idade, sexom, ganho;
    float gcarboidrato, gproteina, glipideo, pcarboidrato, kcalcarboidrato, kcalproteina, kcallipideo, gchokg, gptnkg, glipkg;

    system("cls");
    printf("1 - Cadastro paciente:\n");
    printf("2 - IMC\n");
    printf("3 - GEB\n");
    printf("4 - GET\n");
    printf("5 - Peso Ideal\n");
    printf("6 - Emagrecimento\n");
    printf("7 - Hipertrofia\n");
    printf("8 - Macronutrientes\n");
    printf("9 - Ingestão de água\n");
    printf("10 - Sair \n");
    scanf("%d", &painel);

    switch (painel)
    {
    case 1:
        printf("Digite seu nome: ");
        fflush(stdin);
        fgets(nome, 50, stdin);

        printf("Qual a sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu peso: ");
        scanf("%f", &peso);

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        printf("Digite seu sexo M/F: ");
        scanf("%s", &sexo);
        printf("Seu sexo é: %s", sexo);

        if (sexom == 0)
        {
            if (idade > 3 && idade < 10)
            {
                geb = (((0.113 * peso) + 1.689) * 239);
            }
            if (idade > 10 && idade < 18)
            {
                geb = (((0.084 * peso) + 2.122) * 239);
            }
            if (idade > 18 && idade < 30)
            {
                geb = (((0.056 * peso) + 2.8) * 239);
            }
            if (idade > 30 && idade < 60)
            {
                geb = (((0.046 * peso) + 3.16) * 239);
            }
        }
        else
        {
            if (idade > 3 && idade < 10)
            {
                geb = (((0.063 * peso) + 2.466) * 239);
            }
            if (idade > 10 && idade < 18)
            {
                geb = (((0.047 * peso) + 2.951) * 239);
            }
            if (idade > 18 && idade < 30)
            {
                geb = (((0.048 * peso) + 2.562) * 239);
            }
            if (idade > 30 && idade < 60)
            {
                geb = (((0.048 * peso) + 2.448) * 239);
            }
        }
        get = geb + (geb * 0.25);
        superavit = get + (ganho * 256);
        gcarboidrato = (superavit * 0.4) / 4;
        glipideo = (superavit * 0.3) / 9;
        gproteina = (superavit * 0.3) / 4;
        kcalcarboidrato = superavit * 0.4;
        kcalproteina = superavit * 0.3;
        kcallipideo = superavit * 0.3;
        gchokg = gcarboidrato / peso;
        gptnkg = gproteina / peso;
        glipkg = glipideo / peso;
        imc = peso / pow(altura, 2);

    case 2:
        if (imc < 18.5)
        {
            system("cls");
            printf("Seu IMC é: %.2f (Você esta abaixo do peso!)\n\n", imc);
        }

        if (imc > 18.5 && imc < 25)
        {
            system("cls");
            printf("Seu IMC é: %.2f (Você esta com o Peso Normal!)\n\n", imc);
        }

        if (imc > 25 && imc < 30)
        {
            system("cls");
            printf("Seu IMC é: %.2f (Você esta com Sobrepeso!)\n\n", imc);
        }

        if (imc > 30 && imc < 35)
        {
            system("cls");
            printf("Seu IMC é: %.2f (Você esta com o Obesidade Grau I!)\n\n", imc);
        }

        if (imc > 35 && imc < 40)
        {
            system("cls");
            printf("Seu IMC é: %.2f (Você esta com Obesidade Grau II!)\n\n", imc);
        }

        if (imc > 40)
        {
            system("cls");
            printf("Seu IMC é: %.2f (Você esta com Obesidade Grau III!)\n\n", imc);
        }
    case 3:
        printf("Seu Gasto energético basal é: %.2f kcal\n\n", geb);
    case 4:
        printf("Seu Gasto energético Total é: %.2f kcal\n\n", get);
    case 5:
        printf("O seu peso ideal é: %.2f Kg\n\n", pesoideal);
    case 6:
        printf("Digite quantos quilos quer perder entre 1-4kg:\n");
        scanf("%d", &perda);
        get = geb + (geb * 0.25);
        deficit = get - (perda * 256);
        printf("Seu consumo calórico diário será: %.2f para perda de %d Kg por mês.\n\n", deficit, perda);
    case 7:
        printf("Digite quantos quilos quer ganhar entre 1-4kg:\n");
        scanf("%d", &ganho);
        superavit = get + (ganho * 256);
        printf("Seu consumo calórico diário será: %.2f kcal, para ganho de %d Kg por mês.\n\n", superavit, ganho);
    case 8:
        printf("O seu superavit é: %.2fkcal\n\n", superavit);
        printf("[%.2fg] é a quantidade de carboidrato. \n", gcarboidrato);
        printf("[%.2fg] é a quantidade de proteinas. \n", gproteina);
        printf("[%.2fg] é a quantidade de lipídeo. \n\n\n", glipideo);
        printf("A quantidade de kcal do carboidato é: %.2fkcal\n", kcalcarboidrato);
        printf("A quantidade de kcal da proteína é: %.2fkcal\n", kcalproteina);
        printf("A quantidade de kcal do lipídeo é: %.2fkcal\n\n\n", kcallipideo);
        printf("A g/kg de carboidrato será de: %.2f (g/kg)\n", gchokg);
        printf("A g/kg de proteína será de: %.2f (g/kg)\n", gptnkg);
        printf("A g/kg de lipídeo será de: %.2f (g/kg)\n\n", glipkg);
    case 9:
        printf("A sua ingestão de água é: %.0f mls \n\n", qntagua);
        break;
    }
}
