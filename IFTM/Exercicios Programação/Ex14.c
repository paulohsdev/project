#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float salario, salario1, resul;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario);

    printf("Digite o quanto você ganha: ");
    scanf("%f", &salario1);

    resul = salario1 / salario;

    printf("O seu salário corresponde a %.2f salários mínimos.", resul);

    return 0;
}