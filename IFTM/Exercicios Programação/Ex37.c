#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    float vlcombustivel, concombustivel, distancia, vlestimado;
    int tipocarro;

    printf("Qual tipo de carro vai usar 1 para A, 2 para B e 3 para C ?");
    scanf("%d", &tipocarro);

    printf("Qual a distancia da viagem? ");
    scanf("%f", &distancia);

    printf("Digite o valor do combutível: ");
    scanf("%f", &vlcombustivel);

    if (tipocarro == 1)
    {
        tipocarro = 12;

        if (tipocarro == 2)

            tipocarro = 9;

        if (tipocarro == 3)

            tipocarro = 8;
    }

    concombustivel = distancia / tipocarro;
    vlestimado = concombustivel * vlcombustivel;

    printf("O consumo de combustível será de: %.2f litros\nO valor estimado da viagem será de: R$ %.2f reais", concombustivel, vlestimado);

    return 0;
}