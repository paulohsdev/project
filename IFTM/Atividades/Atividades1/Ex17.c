#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, potencia, termos;
    float s;

    potencia = 1;
    i = 1;
    s = 0;

    printf("Digite o número de termos:");
    scanf("%d", &termos);

    while (i < termos + 2)
    {

        i++;
        potencia++;
        s = 1 + (1 / (pow(potencia, i))) + s;
    }
    printf("%f", s);
    return 0;
}