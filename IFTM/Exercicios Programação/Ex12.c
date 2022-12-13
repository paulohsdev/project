#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float n1, elevado2, elevado3, raiz;

    printf("Digite um número: ");
    scanf("%f", &n1);

    elevado2 = pow(n1, 2);
    elevado3 = pow(n1, 3);
    raiz = cbrt(n1);

    printf("%.2f\n", elevado2);
    printf("%.2f\n", elevado3);
    printf("%.2f\n", raiz);

    return 0;
}