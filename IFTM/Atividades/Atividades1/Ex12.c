#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int n1, resultado, contador;

    resultado = 0;

    printf("Digite um número: ");
    scanf("%d", &n1);

    for (contador = 1; contador < n1; contador++)
    {
        if (n1 % contador == 0)
        {

            resultado += contador;
        }
    }
    if (resultado == n1)
    {
        printf("%d É um número perfeito\n", resultado);
    }
    else
        printf("%d Não é um número perfeito.\n", resultado);
    return 0;
}