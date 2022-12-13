#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, cont;
    float total;

    printf("Digite um número: ");
    scanf("%d", &num);
    num = num + 1;
    cont = 0;
    total = 0;

    while (cont < num)
    {
        cont++;
        total = total + ((num - cont) / (pow(cont, cont)));
    }

    printf("O valor total é : %f\n", total);
    return 0;
}