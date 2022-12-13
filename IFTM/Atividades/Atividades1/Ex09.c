#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int n1, n2, contador, multiplicador;

    contador = 2;
    multiplicador = 1;

    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);

    printf("Digite o segundo número: \n");
    scanf("%d", &n2);

    while (n1 + n2 > 2)
    {

        if (n1 % contador == 0 && n2 % contador == 0)
        {
            multiplicador = contador * multiplicador;
        }
        if (n1 % contador == 0)
        {
            n1 = n1 / contador;
        }
        if (n2 % contador == 0)
        {
            n2 = n2 / contador;
        }
        else
        {
            contador = contador + 1;
        }
    }
    printf("O MDC é: %d", multiplicador);

    return 0;
}
