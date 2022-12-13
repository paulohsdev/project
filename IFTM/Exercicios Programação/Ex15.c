#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float peso, peso1, peso2;

    printf("Digite seu peso atual: ");
    scanf("%f", &peso);

    peso1 = peso + (peso * 0.15);
    peso2 = peso - (peso * 0.2);

    printf("Se você ganhar 15%% de peso, seu peso será %.2f, se você perder 20%% de peso você terá %.2f", peso1, peso2);

    return 0;
}