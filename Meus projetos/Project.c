#include <stdio.h>
#include <locale.h>
#include <math.h>

float calcimc(float n1, float n2);
float calcpesoideal(float n1);
int stop = 0, y, i = 0;

struct cadastro
{
    char nome[50];
    float altura, peso, imc, pesoideal;
    int codpaciente;
};
struct cadastro cad[50];

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int painel, op, codpesquisa;
    system("cls");
    printf("1 - Cadastrar paciente: \n");
    printf("2 - Mostrar pacientes: \n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        do
        {
            stop++;
            printf("Digite o código do paciente: ");
            scanf("%d", &codpesquisa);

            for (i = 0; i < stop; i++)
            {
                while (cad[i].codpaciente == codpesquisa)
                {
                    printf("Esse código já existe !\n");
                    printf("Digite o código do paciente: ");
                    scanf("%d", &codpesquisa);
                }
            }

            cad[i].codpaciente = codpesquisa;

            printf("Digite o nome do paciente: ");
            scanf("%s", &cad[i].nome);

            printf("Digite seu peso: ");
            scanf("%f", &cad[i].peso);

            printf("Digite sua altura: ");
            scanf("%f", &cad[i].altura);

            cad[i].pesoideal = calcpesoideal(cad[i].altura);
            cad[i].imc = calcimc(cad[i].peso, cad[i].altura);
            i++;

            printf("1- Continuar:\n");
            printf("2 - Sair\n");
            scanf("%d", &painel);

        } while (painel == 1);
        return main();
    case 2:
        imprimir();
        break;
    }
}

float calcimc(float n1, float n2)

{
    float vlimc, vlpesoideal;

    vlimc = n1 / pow(n2, 2);
    return vlimc;
}
float calcpesoideal(float n1)
{
    float pideal;
    pideal = pow(n1, 2) * 22.5;
    return pideal;
}
void imprimir()
{
    int i;
    for (i = 1; i <= stop; i++)
    {
        if (cad[i].imc < 16)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Magreza Grau III ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 16 && cad[i].imc < 16.9)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Magreza Grau II ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 17 && cad[i].imc < 18.4)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Magreza Grau I ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 18.5 && cad[i].imc < 24.9)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Eutrofico ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 24.9 && cad[i].imc < 29.9)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Sobrepeso ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 30 && cad[i].imc < 34.9)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Obesidade Grau I ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 35 && cad[i].imc < 39.9)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Obesidade Grau II ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
        if (cad[i].imc > 40)
        {
            printf("Nome: %s\n", cad[i].nome);
            printf("Altura: %.2f\n", cad[i].altura);
            printf("Peso: %.2f\n", cad[i].peso);
            printf("IMC: %.2f [ Obesidade Grau III ]\n", cad[i].imc);
            printf("Peso Ideal: %.2f\n\n", cad[i].pesoideal);
        }
    }
}