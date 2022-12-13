#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");

    char prato[10], sobremesa[10], bebida[10];
    int salada, peixe, frango, carne, abacaxi, sorvete, mousse, bolo, cha, suco, refri, cerveja, calorias;

    printf("Escolha seu prato? Salada, peixe, frango, carne?\n");
    scanf("%s", &prato);

    printf("Escolha a sobremesa: abacaxi, sorvete, mousse ou bolo?\n");
    scanf("%s", &sobremesa);

    printf("Escolha a bebida: chá, suco, refri ou cerveja?\n");
    scanf("%s", &bebida);

    salada = strcmp(prato, "salada");
    peixe = strcmp(prato, "peixe");
    frango = strcmp(prato, "frango");
    carne = strcmp(prato, "carne");
    abacaxi = strcmp(sobremesa, "abacaxi");
    sorvete = strcmp(sobremesa, "sorvete");
    mousse = strcmp(sobremesa, "mousse");
    bolo = strcmp(sobremesa, "bolo");
    cha = strcmp(bebida, "cha");
    suco = strcmp(bebida, "suco");
    refri = strcmp(bebida, "refri");
    cerveja = strcmp(bebida, "cerveja");

    if (salada == 0)
    {
        salada = 180;
    }
    else
    {
        salada = 0;
    }
    if (peixe == 0)
    {
        peixe = 230;
    }
    else
    {
        peixe = 0;
    }
    if (frango == 0)
    {
        frango = 250;
    }
    else
    {
        frango = 0;
    }
    if (carne == 0)
    {
        carne = 350;
    }
    else
    {
        carne = 0;
    }
    if (abacaxi == 0)
    {
        abacaxi = 75;
    }
    else
    {
        abacaxi = 0;
    }
    if (sorvete == 0)
    {
        sorvete = 110;
    }
    else
    {
        sorvete = 0;
    }
    if (mousse == 0)
    {
        mousse = 170;
    }
    else
    {
        mousse = 0;
    }
    if (bolo == 0)
    {
        bolo = 200;
    }
    else
    {
        bolo = 0;
    }
    if (cha == 0)
    {
        cha = 20;
    }
    else
    {
        cha = 0;
    }
    if (suco == 0)
    {
        suco = 70;
    }
    else
        suco = 0;
    if (refri == 0)
    {
        refri = 100;
    }
    else
    {
        refri = 0;
    }
    if (cerveja == 0)
    {
        cerveja = 50;
    }
    else
    {
        cerveja = 0;
    }

    calorias = salada + peixe + frango + carne + abacaxi + sorvete + mousse + bolo + cha + suco + refri + cerveja;
    printf("A quantidade de calorias da sua refeição é: %d kcal.", calorias);
}
