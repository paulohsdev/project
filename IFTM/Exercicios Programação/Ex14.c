#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float salario, salario1, resul;

    printf("Digite o valor do sal�rio m�nimo: ");
    scanf("%f", &salario);

    printf("Digite o quanto voc� ganha: ");
    scanf("%f", &salario1);

    resul = salario1 / salario;

    printf("O seu sal�rio corresponde a %.2f sal�rios m�nimos.", resul);

    return 0;
}