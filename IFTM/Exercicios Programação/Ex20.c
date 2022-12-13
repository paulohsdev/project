#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float peso, pesolibras;

    printf("Digite seu peso:");
    scanf("%f", &peso);

    pesolibras = peso / 0.45359;

    printf("Seu peso em libras é: %.2f libras.", pesolibras);

    return 0;
}