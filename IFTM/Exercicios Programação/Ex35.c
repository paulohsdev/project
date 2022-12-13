#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1;

    printf("Digite um número: ");
    scanf("%d", &n1);

    if (n1 >= 1 && n1 <= 3)

        printf("Primeiro trimestre");

    if (n1 > 3 && n1 <= 6)

        printf("Segundo trimestre");

    if (n1 > 6 && n1 <= 9)

        printf("Terceiro trimestre");

    if (n1 > 9 && n1 <= 12)

        printf("Quarto trimestre");
}
