#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int a, b;

    printf("Digite um n�mero: ");
    scanf("%d", &a);

    printf("Digite outro n�mero: ");
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("Esse n�mero � divisivel\n");
    }

    if (a % b > 0)
    {
        printf("Esse n�mero n�o � divisivel\n");
    }
}