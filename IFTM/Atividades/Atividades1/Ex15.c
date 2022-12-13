#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "");

    system("cls");
    int idade, qntpessoasidade50, somaidade, mediaidade, contador, nazul, numruivos, porcentagemolhosazuis;
    int olhoverde, olhoazul, olhocastanho, olhopreto, cabeloruivo, cabeloloiro, cabelopreto, cabelocastanho;
    char olhos[10], cabelo[10];
    float peso, altura;

    contador = 0;
    somaidade = 0;
    nazul = 0;
    numruivos = 0;

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual o seu peso: ");
    scanf("%f", &peso);

    printf("Qual a sua altura: ");
    scanf("%f", &altura);

    printf("Qual a cor dos seus olhos: ");
    scanf("%s", &olhos);

    printf("Qual a cor dos seus cabelos: ");
    scanf("%s", &cabelo);

    olhoazul = strcmp(olhos, "azul");
    olhocastanho = strcmp(olhos, "castanho");
    olhoverde = strcmp(olhos, "verde");
    olhopreto = strcmp(olhos, "preto");
    cabeloruivo = strcmp(cabelo, "ruivo");
    cabeloloiro = strcmp(cabelo, "loiro");
    cabelocastanho = strcmp(cabelo, "castanho");
    cabelopreto = strcmp(cabelo, "preto");

    while (idade != 0)
    {
        contador++;

        if (idade > 50 && peso < 60)
        {
            qntpessoasidade50 = qntpessoasidade50 + 1;
        }
        if (altura < 1.50)
        {
            somaidade = idade + somaidade;
            mediaidade = somaidade / contador;
        }

        if (olhoazul == 0)
        {
            nazul++;
        }
        if (cabeloruivo == 0 && olhoazul != 0)
        {
            numruivos++;
        }

        printf("Qual a sua idade: ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            break;
        }

        printf("Qual o seu peso: ");
        scanf("%f", &peso);

        printf("Qual a sua altura: ");
        scanf("%f", &altura);

        printf("Qual a cor dos seus olhos: ");
        scanf("%s", &olhos);

        printf("Qual a cor dos seus cabelos: ");
        scanf("%s", &cabelo);

        olhoazul = strcmp(olhos, "azul");
        olhocastanho = strcmp(olhos, "castanho");
        olhoverde = strcmp(olhos, "verde");
        olhopreto = strcmp(olhos, "preto");
        cabeloruivo = strcmp(cabelo, "ruivo");
        cabeloloiro = strcmp(cabelo, "loiro");
        cabelocastanho = strcmp(cabelo, "castanho");
        cabelopreto = strcmp(cabelo, "preto");
    }

    porcentagemolhosazuis = nazul * 100 / contador;

    printf("A quantidade de pessoas com +50 anos e -60kg ?: %d\n", qntpessoasidade50);
    printf("A média da idade das pessoas com menos de 1,50m ?: %d\n", mediaidade);
    printf("A média de pessoas com olhos azuis ?: %d\n", porcentagemolhosazuis);
    printf("O número de ruivos sem olhos azuis ?: %d\n", numruivos);
    return 0;
}
