#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &lado1);

    printf("Digite o valor do segundo lado: ");
    scanf("%d", &lado2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado3 != lado1)
    {
        printf("Triângulo Isósceles\n");
    }

    if (lado2 == lado3 && lado3 != lado1)
    {
        printf("Triângulo Isósceles\n");
    }

    if (lado3 == lado1 && lado2 != lado3)
    {
        printf("Triângulo Isósceles\n");
    }

    if (lado1 != lado2 && lado3 != lado2)
    {
        printf("Triângulo Escaleno\n");
    }

    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("Triângulo Equilátero\n");
    }
}
