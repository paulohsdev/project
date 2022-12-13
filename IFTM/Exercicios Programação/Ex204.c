#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

struct cadastro
{
    int idade, cod;
    float peso, altura, imc;
    char nome[50];
};

int main()
{
    setlocale(LC_ALL, "");

    struct cadastro cad[50];

    int i = 0, j, aux = 0;

    printf("Digite o código do paciente:");
    scanf("%d", &cad[0].cod);

    while (cad[i].cod != 0)
    {
        aux++;
        printf("Digite o nome: ");
        fflush(stdin);
        fgets(cad[i].nome, 50, stdin);

        printf("Digite a altura: ");
        scanf("%f", &cad[i].altura);

        printf("Digite a peso: ");
        scanf("%f", &cad[i].peso);

        cad[i].imc = cad[i].peso / pow(cad[i].altura, 2);
        i++;

        printf("Digite o código do paciente:");
        scanf("%d", &cad[i].cod);

        for (j = 0; j < aux; j++)
        {
            while (cad[i].cod == cad[j].cod)
            {
                printf("Esse código já existe\n\n");
                printf("Digite o código do paciente:");
                scanf("%d", &cad[i].cod);
            }
        }
    }

    for (i = 0; i < aux; i++)
    {
        printf("\nNome: %s", cad[i].nome);
        printf("Altura: %.2f\n", cad[i].altura);
        printf("Peso: %.2f\n", cad[i].peso);
        printf("IMC: %.2f\n", cad[i].imc);
    }
}