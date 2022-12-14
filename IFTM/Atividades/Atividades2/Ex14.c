#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    char nome[50], rua[50], bairro[50], cidade[50], estado[3];
    int telefone, cpf, nrua, ano, mes, dia;
    float vlenviado;

} cadastro;

int main()
{
    cadastro cad[5];
    setlocale(LC_ALL, "");

    int i;

    for (i = 0; i < 3; i++)
    {

        printf("Digite o dia, mês e ano que se tornou associado: \b");
        scanf("%d%d%d", &cad[i].dia, &cad[i].mes, &cad[i].ano);

        system("cls");
        printf("Digite o nome: ");
        fflush(stdin);
        scanf("%s", &cad[i].nome);

        printf("Digite o nome da rua:");
        scanf("%s", &cad[i].rua);

        printf("Digite o número da casa:");
        scanf("%d", &cad[i].nrua);

        printf("Digite o nome do bairro:");
        scanf("%s", &cad[i].bairro);

        printf("Digite o nome da cidade:");
        scanf("%s", &cad[i].cidade);

        printf("Digite o nome do estado:");
        scanf("%s", &cad[i].estado);

        printf("Digite o CPF:");
        scanf("%d", &cad[i].cpf);

        printf("Digite o telefone:");
        scanf("%d", &cad[i].telefone);

        printf("Digite o valor enviado a cooperativa:");
        scanf("%f", &cad[i].vlenviado);
    }

    // for (i = 0; i < count; i++)
    // {
    //     /* code */
    // }
}