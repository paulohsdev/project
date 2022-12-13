#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

typedef struct
{
    int codcargo;
    float salario, somacargo;
} car;
car cargo[3];

typedef struct
{
    char rua[50], bairro[50], estado[3], cidade[50];
    int nrua, cep;
} endereco;
endereco endfunc[10];

typedef struct
{
    char nomefunc[50], copnome[50];
    int codfunc, codcargo, stop, copcargo;
    endereco endfunc;
    float salariofunc, salariocop, mediasalarial;
} cadastro;
cadastro cad[10];

void cadastrofunc() // * CADASTRO DE FUNCIONÁRIO
{
    int i = 0, j = 0, op, painel, codpesquisa, r = 0, y;
    setlocale(LC_ALL, "");

    cargo[0].somacargo = 0;
    cargo[1].somacargo = 0;
    cargo[2].somacargo = 0;

    printf("1 - Cadastrar funcionário:\n");
    printf("2 - Atualizar funcionárioasdasdas\n");
    scanf("%d", &painel);

    switch (painel)
    {

    case 1:
        system("cls");
        do
        {
            r++;
            cad[i].stop = r;

            printf("Digite o código do funcionário: ");
            scanf("%d", &cad[i].codfunc);

            for (j = 0; j < cad[j].stop; j++)
            {
                for (y = j + 1; y < cad[y].stop; y++)
                {
                    while (cad[j].codfunc == cad[y].codfunc)
                    {
                        printf("Esse código já existe !\n");
                        printf("Digite outro código: ");
                        scanf("%d", &cad[j].codfunc);
                    }
                }
            }

            system("cls");
            printf("Código cadastrado com sucesso!\n\n");

            printf("Digite o nome do funcionário: ");
            fflush(stdin);
            fgets(cad[i].nomefunc, 50, stdin);
            strcpy(cad[i].copnome, cad[i].nomefunc);

            printf("Digite o código do cargo: ");
            scanf("%d", &cad[i].codcargo);
            cad[i].copcargo = cad[i].codcargo;

            printf("Digite o nome da rua:");
            fflush(stdin);
            fgets(cad[i].endfunc.rua, 50, stdin);

            printf("Digite o número da casa:");
            scanf("%d", &cad[i].endfunc.nrua);

            printf("Digite o nome do bairro:");
            fflush(stdin);
            fgets(cad[i].endfunc.bairro, 50, stdin);

            printf("Digite o nome da cidade:");
            fflush(stdin);
            fgets(cad[i].endfunc.cidade, 50, stdin);

            printf("Digite o nome do estado: ");
            fflush(stdin);
            fgets(cad[i].endfunc.estado, 50, stdin);

            printf("Digite o CEP:");
            scanf("%d", &cad[i].endfunc.cep);
            system("cls");
            i++;
            system("cls");
            printf("1- Continuar\n");
            printf("2 - Sair;\n");
            scanf("%d", &op);

        } while (op == 1);
        // cad[i].codfunc = 0;

        for (i = 0; i < cad[i].stop; i++)
        {

            if (cad[i].codcargo == 1)
            {
                cad[i].salariofunc = cargo[0].salario;
                cad[i].salariocop = cad[i].salariofunc;
                cargo[0].somacargo = cargo[0].somacargo + cad[i].salariofunc;
                cad[i].mediasalarial = cad[i].mediasalarial + cad[i].salariofunc;
            }
            if (cad[i].codcargo == 2)
            {
                cad[i].salariofunc = cargo[1].salario;
                cad[i].salariocop = cad[i].salariofunc;
                cargo[1].somacargo = cargo[1].somacargo + cad[i].salariofunc;
                cad[i].mediasalarial = cad[i].mediasalarial + cad[i].salariofunc;
            }
            if (cad[i].codcargo == 3)
            {
                cad[i].salariofunc = cargo[2].salario;
                cad[i].salariocop = cad[i].salariofunc;
                cargo[2].somacargo = cargo[2].somacargo + cad[i].salariofunc;
                cad[i].mediasalarial = cad[i].mediasalarial + cad[i].salariofunc;
            }
        }
        break;
    case 2:

        printf("Digite o código do funcionário que deseja alterar: "); // * ALTERAÇÃO DE FUNCIONÁRIO
        scanf("%d", &codpesquisa);
        system("cls");

        for (i = 0; i < cad[i].stop; i++)
        {
            if (codpesquisa == cad[i].codfunc)
            {
                printf("Nome: %s", cad[i].nomefunc);
                printf("Codigo: %d\n", cad[i].codfunc);
                printf("Cargo: %d\n", cad[i].codcargo);

                printf("Altere o nome do funcionário: ");
                fflush(stdin);
                fgets(cad[i].nomefunc, 50, stdin);
                strcpy(cad[i].copnome, cad[i].nomefunc);

                printf("Digite o código do cargo: ");
                scanf("%d", &cad[i].codcargo);
                // cad[i].copcargo = cad[i].codcargo;

                printf("Digite o nome da rua:");
                fflush(stdin);
                fgets(cad[i].endfunc.rua, 50, stdin);

                printf("Digite o número da casa:");
                scanf("%d", &cad[i].endfunc.nrua);

                printf("Digite o nome do bairro:");
                fflush(stdin);
                fgets(cad[i].endfunc.bairro, 50, stdin);

                printf("Digite o nome da cidade:");
                fflush(stdin);
                fgets(cad[i].endfunc.cidade, 50, stdin);

                printf("Digite o nome do estado: ");
                fflush(stdin);
                fgets(cad[i].endfunc.estado, 50, stdin);

                printf("Digite o CEP:");
                scanf("%d", &cad[i].endfunc.cep);

                for (i = 0; i < cad[i].stop; i++)
                {

                    if (cad[i].codcargo == 1)
                    {
                        cad[i].salariofunc = cargo[0].salario;
                        cad[i].salariocop = cad[i].salariofunc;
                        cargo[0].somacargo = cargo[0].somacargo + cad[i].salariofunc;
                    }
                    if (cad[i].codcargo == 2)
                    {
                        cad[i].salariofunc = cargo[1].salario;
                        cad[i].salariocop = cad[i].salariofunc;
                        cargo[1].somacargo = cargo[1].somacargo + cad[i].salariofunc;
                    }
                    if (cad[i].codcargo == 3)
                    {
                        cad[i].salariofunc = cargo[2].salario;
                        cad[i].salariocop = cad[i].salariofunc;
                        cargo[2].somacargo = cargo[2].somacargo + cad[i].salariofunc;
                    }
                }
            }
        }
        system("cls");

        for (i = 0; i < cad[i].stop; i++)
        {
            printf("Nome: %sSalário: %.2f\n\n", cad[i].copnome, cad[i].salariocop);
        }
        system("pause");
        break;
    }
}
