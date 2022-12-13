#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float salariominimo, horasextras, horastrabalhadas, dependentes, vlhorastrabalhadas, salariomes, vlpordependente, vlhorasextras, salariobruto, vlirrf, salarioliquido, gratificacao, salarioareceber;

    printf("Digite o salario mínimo: ");
    scanf("%f", &salariominimo);

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horastrabalhadas);

    printf("Digite o número de dependentes: ");
    scanf("%f", &dependentes);

    printf("Digite o número de horas extras: ");
    scanf("%f", &horasextras);

    vlhorastrabalhadas = horastrabalhadas / 20;
    salariomes = horastrabalhadas * vlhorastrabalhadas;
    vlpordependente = dependentes * 32;
    vlhorasextras = vlhorastrabalhadas + (vlhorastrabalhadas * 0.5);
    salariobruto = salariomes + vlpordependente + vlhorasextras;

    if (salariobruto < 200)
    {
        vlirrf = 0;
    }
    if (salariobruto > 200 && salariobruto < 500)
    {
        vlirrf = salariobruto * 0.1;
    }
    if (salariobruto > 500)
    {
        vlirrf = salariobruto * 0.2;
    }
    salarioliquido = salariobruto - vlirrf;

    if (salarioliquido < 350)
    {
        gratificacao = 100;
    }
    if (salarioliquido > 350)
    {
        gratificacao = 50;
    }
    salarioareceber = salarioliquido + gratificacao;
    printf("O salário a receber será: R$%.2f", salarioareceber);
}