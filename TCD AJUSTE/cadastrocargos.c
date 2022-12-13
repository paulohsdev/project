#include <stdio.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    int codcargo;
    float salario, somacargo;

} car;
car cargo[3];

void cargos()
{

    int i = 0, op, codpesquisa;
    system("cls");
    setlocale(LC_ALL, "");

    printf("1 - Cadastrar cargos\n");
    printf("2 - Alterar cargos\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        if (cargo[i].codcargo == 0)
        {
            for (i = 0; i < 3; i++)
            {
                printf("Digite o código do cargo: ");
                scanf("%d", &cargo[i].codcargo);

                printf("Digite o salário do cargo: ");
                scanf("%f", &cargo[i].salario);
            }
            break;
        }

        else
        {
            printf("Cargos já cadastrados!");
            system("pause");
            break;
        }

    case 2:
        printf("Digite o codigo do cargo que deseja alterar ");
        scanf("%d", &codpesquisa);

        for (i = 0; i < 3; i++)
        {
            if (cargo[i].codcargo == codpesquisa)
            {
                printf("Cargo: %d\n", cargo[i].codcargo);
                printf("Salário: %.2f\n", cargo[i].salario);

                printf("Digite o novo código do cargo: ");
                scanf("%d", &cargo[i].codcargo);

                printf("Digite o novo salário do cargo: ");
                scanf("%f", &cargo[i].salario);

                printf("Cargo: %d\n", cargo[i].codcargo);
                printf("Salário: %.2f\n", cargo[i].salario);
                system("pause");
            }
        }
    }
}