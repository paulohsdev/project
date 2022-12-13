#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, cod[5], aux;
    char nome[5][20];
    float salario[5], maiorsalario, menorsalario;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um nome:");
        scanf("%s", nome[i]);

        printf("Digite o codigo: ");
        scanf("%d", &cod[i]);

        printf("Digite o salário: ");
        scanf("%f", &salario[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            menorsalario = salario[i];
            maiorsalario = salario[i];
        }
        if (salario[i] > maiorsalario)
        {
            maiorsalario = salario[i];
        }
        if (salario[i] < menorsalario)
        {
            menorsalario = salario[i];
        }
    }

    printf("O maior salário é: %.2f\n", maiorsalario);
    printf("O menor salário é: %.2f\n", menorsalario);
}