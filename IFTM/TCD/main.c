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

// * REGI�O DAS STRUCTS
typedef struct
{
    int codcargo;
    float salario, somacargo;

} car;
car cargo[3];

int main()
{
    int op;

    cargo[0].codcargo = 0;
    cargo[1].codcargo = 0;
    cargo[2].codcargo = 0;

    setlocale(LC_ALL, "");
    do
    {
        system("cls");

        printf("1 - Cadastrar cargos \n");
        printf("2 - Cadastrar funcion�rios \n");
        printf("3 - Ordena��o \n");
        printf("4 - Exibir relat�rio completo \n");
        printf("5 - Exibir salario dos funcion�rios \n");
        printf("6 - Exibir m�dia salarial dos funcion�rios \n");
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