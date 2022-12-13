#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");
    int piso, tintainterna, tintaexterna;
    float a, b, c, areapiso, vltintainterna, vlpiso, vltintaexterna, medidaparedeinterna, medidaparedeexterna, totaltinta;

    printf("Digite o valor de Altura: \n");
    scanf("%f", &a);

    printf("Digite o valor da Comprimento: \n");
    scanf("%f", &b);

    printf("Digite o valor de Largura: \n");
    scanf("%f", &c);

    printf("Escolha a tinta: 1 R$22,00 ou 2 R$47,00 para a parede interna: \n");
    scanf("%d", &tintainterna);

    printf("Escolha a tinta: 1 R$22,00 ou 2 R$47,00 para a parede externa: \n");
    scanf("%d", &tintaexterna);

    printf("Escolha o piso: 1 R$24,00 ou 2 R$31,00 ou 3 R$55,00 \n");
    scanf("%d", &piso);

    areapiso = a * b;
    medidaparedeinterna = ((a * b) + (a * c));
    medidaparedeexterna = ((a * b) + (a * c));

    if (piso == 1)
    {
        piso = 24;
        vlpiso = areapiso * piso;
    }
    if (piso == 2)
    {
        piso = 31;
        vlpiso = areapiso * piso;
    }
    if (piso == 3)
    {
        piso = 55;
        vlpiso = areapiso * piso;
    }

    if (tintainterna == 1)
    {
        tintainterna = 22;
        vltintainterna = (tintainterna * medidaparedeinterna) / 2;
    }

    if (tintainterna == 2)
    {
        tintainterna = 47;
        vltintainterna = (tintainterna * medidaparedeinterna) / 2;
    }
    if (tintaexterna == 1)
    {
        tintaexterna = 22;
        vltintaexterna = (tintaexterna * medidaparedeexterna) / 2;
    }
    if (tintaexterna == 2)
    {
        tintaexterna = 47;
        vltintaexterna = (tintaexterna * medidaparedeexterna) / 2;
    }
    printf("A area total do piso será: %.2fm²\n", areapiso);
    printf("A area total das paredes internas será %.2fm²\n", medidaparedeinterna);
    printf("A area total das paredes externas será %.2fm²\n", medidaparedeinterna);
    printf("O valor do piso será R$%.2f\n", vlpiso);
    printf("O valor da tinta para a parede interna será: R$%.2f \n", vltintainterna);
    printf("O valor da tinta para a parede externa será: R$%.2f \n", vltintaexterna);
    return 0;
}