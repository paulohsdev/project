#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float precofabrica, lucrodistribuidor, precofinal, impostos;

    printf("Qual valor de fabrica do carro? ");
    scanf("%f", &precofabrica);

    printf("Qual percentual de lucro esperado? ");
    scanf("%f", &lucrodistribuidor);

    printf("Qual percentual de impostos? ");
    scanf("%f", &impostos);

    lucrodistribuidor = precofabrica * (lucrodistribuidor / 100);
    impostos = precofabrica * (impostos / 100);
    precofinal = lucrodistribuidor + impostos + precofabrica;

    printf("O pre�o de fabrica �: R$%.2f\nO valor dos impostos �: R$%.2f\nO lucro esperado � %.2f\nE o pre�o final do carro �: R$%.2f", precofabrica, impostos, lucrodistribuidor, precofinal);

    return 0;
}