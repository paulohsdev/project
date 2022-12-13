#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    float n1;

    printf("Digite um número: ");
    scanf("%f", &n1);

    if (n1 > 0)
    {
        n1 = sqrt(n1);
        printf("A raiz quadrada é: %.1f\n", n1);
    }

    if (n1 < 0)
    {
        n1 = pow(n1, 2);
        printf("A potencialização é: %.2f\n", n1);
    }

    return 0;
}