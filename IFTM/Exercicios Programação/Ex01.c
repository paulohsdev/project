#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float farenheit, celsius;

    printf("Digite o valor de farenheit: \n");
    scanf("%f", &farenheit);

    celsius = (farenheit - 32) * 5 / 9;

    printf("O valor em celsius ?: %.2f ?C", celsius);

    return 0;
}
