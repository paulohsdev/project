#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    float salario, vlhoras, vlhoraextra, salariobase, totalhorasextras, salariobruto, imposto, salarioliquido;
    int numerohoras, numhorasextras;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &numerohoras);

    printf("Digite a quantidade de horas extras: ");
    scanf("%d", &numhorasextras);

    imposto = 8.5 / 100;

    vlhoras = salario / 8;
    vlhoraextra = salario / 4;
    salariobase = numerohoras * vlhoras;
    totalhorasextras = numhorasextras * vlhoraextra;
    salariobruto = salariobase + totalhorasextras;
    imposto = imposto * salariobruto;
    salarioliquido = salariobruto - imposto;

    printf("O valor total das horas trabalhadas foi: R$ %.2f\n", salariobase);
    printf("O valor total das horas extras foi de: R$ %.2f\n", totalhorasextras);
    printf("O salário bruto é de: R$ %.2f\n", salariobruto);
    printf("O total do imposto devido foi de: R$ %.2f\n", imposto);
    printf("O valor do salário líquido é de: R$ %.2f\n", salarioliquido);

    return 0;
}