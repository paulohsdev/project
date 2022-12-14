#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50], rua[50], bairro[50], cidade[50], estado[3];
    int telefone, cpf, ncasa, ano, mes, dia;
    float vlenviado, pagamento;

} cadastro;

int main()
{
    cadastro cad[1230];
    setlocale(LC_ALL, "");

    int i, j;
    float aux, totaldesembolso = 0;
    char aux1[50];

    for (i = 0; i < 1230; i++)
    {

        // printf("Digite o dia, mês e ano que se tornou associado: \b");
        // scanf("%d%d%d", &cad[i].dia, &cad[i].mes, &cad[i].ano);

        system("cls");
        printf("Digite o nome: ");
        fflush(stdin);
        scanf("%s", &cad[i].nome);

        printf("Digite o nome da rua:");
        scanf("%s", &cad[i].rua);

        printf("Digite o número da casa:");
        scanf("%d", &cad[i].ncasa);

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

    for (i = 0; i < 1230; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (cad[i].vlenviado < cad[j].vlenviado)
            {
                aux = cad[i].vlenviado;
                cad[i].vlenviado = cad[j].vlenviado;
                cad[j].vlenviado = aux;

                aux = cad[i].ncasa;
                cad[i].ncasa = cad[j].ncasa;
                cad[j].ncasa = aux;

                aux = cad[i].cpf;
                cad[i].cpf = cad[j].cpf;
                cad[j].cpf = aux;

                aux = cad[i].telefone;
                cad[i].telefone = cad[j].telefone;
                cad[j].telefone = aux;

                strcpy(aux1, cad[i].nome);
                strcpy(cad[i].nome, cad[j].nome);
                strcpy(cad[j].nome, aux1);

                strcpy(aux1, cad[i].rua);
                strcpy(cad[i].rua, cad[j].rua);
                strcpy(cad[j].rua, aux1);

                strcpy(aux1, cad[i].bairro);
                strcpy(cad[i].bairro, cad[j].bairro);
                strcpy(cad[j].bairro, aux1);

                strcpy(aux1, cad[i].cidade);
                strcpy(cad[i].cidade, cad[j].cidade);
                strcpy(cad[j].cidade, aux1);

                strcpy(aux1, cad[i].estado);
                strcpy(cad[i].estado, cad[j].estado);
                strcpy(cad[j].estado, aux1);
            }
        }
    }

    for (i = 0; i < 1230; i++)
    {
        printf("Nome: %s\nValor: R$%.2f\n", cad[i].nome, cad[i].vlenviado);
        if (i == 0)
        {
            cad[i].pagamento = (cad[i].vlenviado * 0.2) + cad[i].vlenviado;
            totaldesembolso = totaldesembolso + cad[i].pagamento;
        }
        if (i == 1)
        {
            cad[i].pagamento = (cad[i].vlenviado * 0.18) + cad[i].vlenviado;
            totaldesembolso = totaldesembolso + cad[i].pagamento;
        }
        if (i == 2)
        {
            cad[i].pagamento = (cad[i].vlenviado * 0.16) + cad[i].vlenviado;
            totaldesembolso = totaldesembolso + cad[i].pagamento;
        }

        if (i > 2 && i < 10)
        {
            cad[i].pagamento = (cad[i].vlenviado * 0.16) + cad[i].vlenviado;
            totaldesembolso = totaldesembolso + cad[i].pagamento;
        }
        else
        {
            cad[i].pagamento = (cad[i].pagamento);
        }
    }

    system("cls");
    for (i = 0; i < 3; i++)
    {
        printf("Nome: %s\n", cad[i].nome);
        printf("Valor com Bônus: %.2f\n", cad[i].pagamento);
        printf("Rua: %s\n", cad[i].rua);
        printf("Nº Casa: %d\n", cad[i].ncasa);
        printf("Bairro: %s\n", cad[i].bairro);
        printf("Cidade: %s\n", cad[i].cidade);
        printf("CPF: %d\n", cad[i].cpf);
        printf("Telefone: %d\n", cad[i].telefone);
        printf("Teste");
    }
    printf("O valor total desembolsado pela cooperativa é: %.2f\n", totaldesembolso);
}