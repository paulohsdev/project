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

        printf("Menu de op��es: \n");
        printf("1. Novo sal�rio: \n");
        printf("2. F�rias: \n");
        printf("3. D�cimo terceiro: \n");
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
            printf("O novo sal�rio �: R$%.2f\n", novosalario);
            break;
        case 2:
            printf("Digite o salario: ");
            scanf("%f", &salario);
            printf("F�rias\n");
            ferias = salario + (salario / 3);
            printf("O valor das f�rias � R$%.2f\n", ferias);
            break;
        case 3:
            printf("Digite o salario: ");
            scanf("%f", &salario);
            printf("Digite os meses de trabalho: ");
            scanf("%d", &meses);
            decimoterceiro = salario * meses / 12;
            printf("O valor de D�cimo terceiro �: R$%.2f\n", decimoterceiro);
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