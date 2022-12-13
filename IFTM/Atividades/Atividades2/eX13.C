#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int cod, meses;
    float vlimposto, multa, vlimovel, iptu;

} identificacao;

int main()
{
    setlocale(LC_ALL, "");
    identificacao id[3];

    int i = 0;

    printf("Digite o código de identificação do imóvel: ");
    scanf("%d", &id[i].cod);

    for (i = 0; id[i].cod != 0; i++)
    {

        printf("Digite o valor do imóvel: ");
        scanf("%f", &id[i].vlimovel);

        printf("Digite a quantidade de meses em atraso: ");
        scanf("%d", &id[i].meses);

        printf("Digite o código de identificação do imóvel: ");
        scanf("%d", &id[i + 1].cod);

        id[i].iptu = id[i].iptu + (id[i].vlimovel * 0.0055) * id[i].meses;

        if (id[i].meses > 0)
        {
            id[i].multa = id[i].multa + ((id[i].iptu * 0.02) * id[i].meses);
        }
    }

    for (i = 0; id[i].cod != 0; i++)
    {
        printf("\nCódigo: %d\n", id[i].cod);
        printf("Parcelas em Atraso: %d\n", id[i].meses);
        printf("IPTU: R$%.2f\n", id[i].iptu);
        printf("Valor: R$%.2f\n", id[i].vlimovel);
        printf("Multa: R$%.2f\n", id[i].multa);
    }
}