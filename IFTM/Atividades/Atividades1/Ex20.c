#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float salario, novosalario, ferias, decimoterceiro;
    int painel, meses, sair;

    while (painel != 4)
    {

        printf("Menu de opções: \n");
        printf("1. Novo salário: \n");
        printf("2. Férias: \n");
        printf("3. Décimo terceiro: \n");
        printf("4. Sair: \n");
        scanf("%d", &painel);

        switch (painel)
        {
            system("cls");
        case 1:
            printf("Digite o salario: ");
            scanf("%f", &salario);
            printf("Novo salario\n");
            novosalario = salario + (salario / 3);
            printf("O novo salário é: R$%.2f\n", novosalario);
            break;
        case 2:
            printf("Digite o salario: ");
            scanf("%f", &salario);
            printf("Férias\n");
            ferias = salario + (salario / 3);
            printf("O valor das férias é R$%.2f\n", ferias);
            break;
        case 3:
            printf("Digite o salario: ");
            scanf("%f", &salario);
            printf("Digite os meses de trabalho: ");
            scanf("%d", &meses);
            decimoterceiro = salario * meses / 12;
            printf("O valor de Décimo terceiro é: R$%.2f\n", decimoterceiro);
            break;
        case 4:
            if (painel == 4)
            {
                printf("4. Sair do programa\n");
            }
            break;
        }
    }
    return 0;
}