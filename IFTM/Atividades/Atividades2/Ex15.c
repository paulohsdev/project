#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float salario, vendas;
    int mes, ano;

} cadastro;
cadastro cad[3][3];

int main()
{
    setlocale(LC_ALL, "");

    int i, j, k, pontomensal[3][15] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, pontototal[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, maiorpontuacao = 0;
    char aux[3][50] = {"Novembro", "Dezembro", "Janeiro"}, aux1[50][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("Cadastro [%d]\n", i + 1);
                printf("Digite seu nome: ");
                scanf("%s", &cad[i][j].nome);
            }

            printf("Digite o valor das vendas de %s: ", aux[j]);
            scanf("%f", &cad[i][j].vendas);

            if (cad[i][j].vendas >= 100)
            {
                pontomensal[i][j] = cad[i][j].vendas / 100;
                pontototal[i] = pontomensal[i][j] + pontototal[i];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("Nome: %s\n", cad[i][j].nome);
            }

            printf("Pontos de %s :%d\n:", aux[j], pontomensal[i][j]);
        }
        printf("Total de pontos: %d\n", pontototal[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (pontototal[i] > maiorpontuacao)
            {
                maiorpontuacao = pontototal[i];
                strcpy(aux1[i], cad[i][j].nome);
            }
        }
    }

    printf("nome: %s\nMaior ponto: %d", aux1, maiorpontuacao);
}