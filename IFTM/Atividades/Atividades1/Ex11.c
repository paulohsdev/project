#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int contador;
    double graos;

    contador = 1;
    graos = 2;

    for (contador = 1; contador < 64; contador++)
    {
        graos = graos * contador;
    }
    printf("A quantidade de grãos é: %.2f", graos);
    return 0;
}