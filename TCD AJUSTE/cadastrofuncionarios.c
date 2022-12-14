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
    char nomefunc[50], rua[50], bairro[50], estado[3], cidade[50];
    int codfunc, codcargo, stop, nrua, cep;
    float salariofunc, mediasalarial;

} cadastro;
cadastro cad[10];

void cadastrofunc() // * CADASTRO DE FUNCION�RIO
{

    int i = 0, j = 0, op, painel, codpesquisa, r = 0, y;
    setlocale(LC_ALL, "");

    // SOMACARGO USADO PARA DIVIDIR O SAL�RIO TOTAL POR CARGOS
    cargo[0].somacargo = 0;
    cargo[1].somacargo = 0;
    cargo[2].somacargo = 0;

    float somacargo1 = 0, somacargo2 = 0, somacargo3 = 0;

    printf("1 - Cadastrar funcion�rio:\n");
    printf("2 - Atualizar funcion�rio\n");
    scanf("%d", &painel);

    switch (painel)
    {

    case 1: // CADASTRO DOS FUNCION�RIOS
        system("cls");
        do
        {
            r++;
            cad[i].stop = r; // V�RIAVEL DE CONTROLE PARA BUSCA E PARADA

            printf("Digite o c�digo do funcion�rio: ");
            scanf("%d", &cad[i].codfunc);

            for (j = 0; j < cad[j].stop; j++) // VERIFICANDO SE TEM ALGUM C�DIGO QUE J� EST� SENDO USADO
            {
                for (y = j + 1; y < cad[y].stop; y++)
                {
                    while (cad[j].codfunc == cad[y].codfunc)
                    {
                        printf("Esse c�digo j� existe !\n");
                        printf("Digite outro c�digo: ");
                        scanf("%d", &cad[j].codfunc);
                    }
                }
            }

            system("cls");
            printf("C�digo cadastrado com sucesso!\n\n");

            printf("Digite o nome do funcion�rio: ");
            fflush(stdin);
            fgets(cad[i].nomefunc, 50, stdin);

            printf("Digite o c�digo do cargo: ");
            scanf("%d", &cad[i].codcargo);

            printf("Digite o nome da rua:");
            fflush(stdin);
            fgets(cad[i].rua, 50, stdin);

            printf("Digite o n�mero da casa:");
            scanf("%d", &cad[i].nrua);

            printf("Digite o nome do bairro:");
            fflush(stdin);
            fgets(cad[i].bairro, 50, stdin);

            printf("Digite o nome da cidade:");
            fflush(stdin);
            fgets(cad[i].cidade, 50, stdin);

            printf("Digite o nome do estado: ");
            fflush(stdin);
            fgets(cad[i].estado, 50, stdin);

            printf("Digite o CEP:");
            scanf("%d", &cad[i].cep);
            system("cls");
            i++;
            system("cls");
            printf("1- Continuar\n");
            printf("2 - Sair;\n");
            scanf("%d", &op);

        } while (op == 1); // VARIAVEL DE STOP DE CADASTRO

        for (i = 0; i < cad[i].stop; i++) // ATRIBUINDO O SALARIO E CALCULANDO A MEDIA SALARIAL E SOMA POR CARGO
        {
            if (cad[i].codcargo == 1)
            {
                cad[i].salariofunc = cargo[0].salario;
                cargo[0].somacargo = cargo[0].somacargo + cad[i].salariofunc;
                cad[i].mediasalarial = cad[i].mediasalarial + cad[i].salariofunc;
            }
            if (cad[i].codcargo == 2)
            {
                cad[i].salariofunc = cargo[1].salario;
                cargo[1].somacargo = cargo[1].somacargo + cad[i].salariofunc;
                cad[i].mediasalarial = cad[i].mediasalarial + cad[i].salariofunc;
            }
            if (cad[i].codcargo == 3)
            {
                cad[i].salariofunc = cargo[2].salario;
                cargo[2].somacargo = cargo[2].somacargo + cad[i].salariofunc;
                cad[i].mediasalarial = cad[i].mediasalarial + cad[i].salariofunc;
            }
        }

        for (i = 0; i < cad[i].stop; i++) // MOSTRANDO OS CADASTROS
        {
            printf("Nome: %sSal�rio: %.2f\n", cad[i].nomefunc, cad[i].salariofunc);
        }
        system("pause");

        break;

    case 2: // ALTERA��O DO CADASTRO DE UM FUNCION�RIO

        printf("Digite o c�digo do funcion�rio que deseja alterar: ");
        scanf("%d", &codpesquisa);
        system("cls");

        for (i = 0; i < cad[i].stop; i++) // BUSCA DO FUNCION�RIO
        {
            if (codpesquisa == cad[i].codfunc)
            {
                printf("Nome: %s", cad[i].nomefunc);
                printf("Codigo: %d\n", cad[i].codfunc);
                printf("Cargo: %d\n", cad[i].codcargo);

                printf("Altere o nome do funcion�rio: ");
                fflush(stdin);
                fgets(cad[i].nomefunc, 50, stdin);

                printf("Digite o c�digo do cargo: ");
                scanf("%d", &cad[i].codcargo);

                printf("Digite o nome da rua:");
                fflush(stdin);
                fgets(cad[i].rua, 50, stdin);

                printf("Digite o n�mero da casa:");
                scanf("%d", &cad[i].nrua);

                printf("Digite o nome do bairro:");
                fflush(stdin);
                fgets(cad[i].bairro, 50, stdin);

                printf("Digite o nome da cidade:");
                fflush(stdin);
                fgets(cad[i].cidade, 50, stdin);

                printf("Digite o nome do estado: ");
                fflush(stdin);
                fgets(cad[i].estado, 50, stdin);

                printf("Digite o CEP:");
                scanf("%d", &cad[i].cep);

                for (i = 0; i < cad[i].stop; i++) // ATRIBUINDO NOVO SAL�RIO SE O CARGO FOR ALTERADO
                {

                    if (cad[i].codcargo == 1)
                    {
                        cad[i].salariofunc = cargo[0].salario;
                        cargo[0].somacargo = cargo[0].somacargo + cad[i].salariofunc;
                    }
                    if (cad[i].codcargo == 2)
                    {
                        cad[i].salariofunc = cargo[1].salario;
                        cargo[1].somacargo = cargo[1].somacargo + cad[i].salariofunc;
                    }
                    if (cad[i].codcargo == 3)
                    {
                        cad[i].salariofunc = cargo[2].salario;
                        cargo[2].somacargo = cargo[2].somacargo + cad[i].salariofunc;
                    }
                }
            }
        }
        system("cls");

        for (i = 0; i < cad[i].stop; i++) // MOSTRANDO A ALTERA��O FEITA
        {
            printf("Nome: %sSal�rio: %.2f\n\n", cad[i].nomefunc, cad[i].salariofunc);
        }
        system("pause");
        break;
    }
}
