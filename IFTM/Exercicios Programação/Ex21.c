#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);

    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    printf("O valor de A �: %d\nE o valor de B �: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("O novo valor de A �: %d\nE o novo valor de B �: %d", a, b);

    return 0;
}