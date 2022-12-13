#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[50];
    float salario;
    int aux, filhos;

} cadastro;

int main()
{
    setlocale(LC_ALL, "");
    float mediasalario = 0, maiorsalario = 0;
    int i, mediafilhos = 0;

    cadastro cad[5];
    cad[0].aux = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome: ");
        fflush(stdin);
        scanf("%s", &cad[i].nome);

        printf("Digite o salario: ");
        scanf("%f", &cad[i].salario);

        printf("Quantos filhos você tem? ");
        scanf("%d", &cad[i].filhos);

        cad[0].aux++;
        mediasalario = cad[i].salario + mediasalario;
        mediafilhos = mediafilhos + cad[i].filhos;
    }

    mediasalario = mediasalario / cad[0].aux;
    mediafilhos = mediafilhos / cad[0].aux;

    for (i = 0; i < 5; i++)
    {
        if (cad[i].salario > maiorsalario)
        {
            maiorsalario = cad[i].salario;
        }
    }

    printf("A média salarial é: %.2f\n", mediasalario);
    printf("A média de filhos é: %d\n", mediafilhos);
    printf("O maior salário é: %.2f\n", maiorsalario);
}