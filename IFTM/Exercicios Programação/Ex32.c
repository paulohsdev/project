#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("Esse número é divisivel\n");
    }

    if (a % b > 0)
    {
        printf("Esse número não é divisivel\n");
    }
}