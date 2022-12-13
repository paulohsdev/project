#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float salario, horastrabalho, salariobruto, imposto, salarioliquido, vlhora;

    printf("Qual é o seu salário?: ");
    scanf("%f", &salario);

    printf("Quantas horas trabalhou esse mês?: ");
    scanf("%f", &horastrabalho);

    vlhora = salario / 10;
    salariobruto = horastrabalho * vlhora;
    imposto = salario * (8.5 / 100);
    salarioliquido = salariobruto - imposto;

    printf("Você receberá nesse mês: R$%.2f reais.\n", salarioliquido);
    printf("O imposto sobre seu salário é de: R$%.2f reais.\n", imposto);
    printf("O valor da sua hora de trabalho é: R$%.2f", vlhora);

    return 0;
}