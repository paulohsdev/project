#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void cargos();
void cadastrofunc();
void ordenacao();
void relatorio();
void exibirsalario();
void mediasalarial();

typedef struct
{
    int codcargo;
    float salario, somacargo;
} car;
car cargo[3];

// * REGIÃO DAS STRUCTS

int main()
{
    int op;

    setlocale(LC_ALL, "");
    do
    {
        system("cls");

        printf("1 - Cadastrar cargos \n");
        printf("2 - Cadastrar funcionários \n");
        printf("3 - Ordenação \n");
        printf("4 - Exibir relatório completo \n");
        printf("5 - Exibir salario dos funcionários \n");
        printf("6 - Exibir média salarial dos funcionários \n");
        printf("7 - Sair \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            cargos();
            break;
        case 2:
            cadastrofunc();
            break;
        case 3:
            ordenacao();
            break;
        case 4:
            relatorio();
            break;
        case 5:
            cargo[0].somacargo;
            cargo[1].somacargo;
            cargo[2].somacargo;
            exibirsalario();
            break;
        case 6:
            mediasalarial();
            break;
        case 7:
            printf("Obrigado por utilizar o sistema!\n");
            system("pause");
            break;
        }

    } while (op != 7);

    return 0;
}