#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int n1, resultado, contador;

    resultado = 0;

    printf("Digite um n�mero: ");
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
        printf("%d � um n�mero perfeito\n", resultado);
    }
    else
        printf("%d N�o � um n�mero perfeito.\n", resultado);
    return 0;
}