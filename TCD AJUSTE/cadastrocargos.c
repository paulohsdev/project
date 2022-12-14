#include <stdio.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    int codcargo;
    float salario, somacargo;

} car;
car cargo[3];

typedef struct
{
    char nomefunc[50], rua[50], bairro[50], estado[3], cidade[50];
    int codfunc, codcargo, stop, nrua, cep;
    float salariofunc, mediasalarial;

} cadastro;
cadastro cad[10];

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

                printf("Digite o novo cádigo do cargo: ");
                scanf("%d", &cargo[i].codcargo);

                printf("Digite o novo salário do cargo: ");
                scanf("%f", &cargo[i].salario);

                printf("Cargo: %d\n", cargo[i].codcargo);
                printf("Salário: %.2f\n", cargo[i].salario);
                system("pause");
            }
        }
        for (i = 0; i < cad[i].stop; i++)
        {
            if (cad[i].codcargo == 1)
            {
                cad[i].salariofunc = cargo[0].salario;
            }
            if (cad[i].codcargo == 2)
            {
                cad[i].salariofunc = cargo[1].salario;
            }
            if (cad[i].codcargo == 3)
            {
                cad[i].salariofunc = cargo[2].salario;
            }
        }
    }
}