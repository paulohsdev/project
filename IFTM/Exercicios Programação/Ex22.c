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

    printf("Qual � o seu sal�rio?: ");
    scanf("%f", &salario);

    printf("Quantas horas trabalhou esse m�s?: ");
    scanf("%f", &horastrabalho);

    vlhora = salario / 10;
    salariobruto = horastrabalho * vlhora;
    imposto = salario * (8.5 / 100);
    salarioliquido = salariobruto - imposto;

    printf("Voc� receber� nesse m�s: R$%.2f reais.\n", salarioliquido);
    printf("O imposto sobre seu sal�rio � de: R$%.2f reais.\n", imposto);
    printf("O valor da sua hora de trabalho �: R$%.2f", vlhora);

    return 0;
}