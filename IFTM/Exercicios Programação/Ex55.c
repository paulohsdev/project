#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("O valor de delta é: %d\n", delta);

    while (a == 0 || delta < 0)
    {
        if (a == 0)
        {
            printf("A equação não é do segundo grau !");
        }
        if (delta < 0)
        {
            printf("A equação não possui raizes reais.");
        }
        return 0;
    }

    if (delta == 0)
    {
        x1 = ((-b + sqrt(delta)) / (2 * a));
        printf("O valor de X1 é: %.2f\n", x1);
    }
    else
    {
        x1 = ((-b + sqrt(delta)) / (2 * a));
        x2 = ((-b - sqrt(delta)) / (2 * a));
        printf("O valor de X1 é: %.2f \nO valor de X2 é: %.2f", x1, x2);
    }
}