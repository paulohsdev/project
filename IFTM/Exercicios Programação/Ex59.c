#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float salario, novosalario, percentual, vlaumento;

    printf("Digite o salario do colaborador: ");
    scanf("%f", &salario);

    if (salario < 280)
    {
        novosalario = salario + (salario * 0.2);
        percentual = ((novosalario * 100) / salario) - 100;
        vlaumento = novosalario - salario;
    }
    if (salario > 280 && salario < 700)
    {
        novosalario = salario + (salario * 0.15);
        percentual = ((novosalario * 100) / salario) - 100;
        vlaumento = novosalario - salario;
    }
    if (salario > 700 && salario < 1500)
    {
        novosalario = salario + (salario * 0.10);
        percentual = ((novosalario * 100) / salario) - 100;
        vlaumento = novosalario - salario;
    }
    if (salario > 1500)
    {
        novosalario = salario + (salario * 0.05);
        percentual = ((novosalario * 100) / salario) - 100;
        vlaumento = novosalario - salario;
    }
    printf("O salário antes do reajuste era: R$ %.2f\n", salario);
    printf("O percentual de aumento aplicado foi: %.0f%%\n", percentual);
    printf("O valor do aumento aplicado foi: R$ %.2f reais\n", vlaumento);
    printf("O novo salário é: R$ %.2f\n", novosalario);
}