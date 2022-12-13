#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    int n[6], i, par = 0, impar;
    for (i = 0; i < 6; i++)
    {

        scanf("%d", &n[i]);

        if (n[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    system("cls");
    for (i = 0; i < 6; i++)
    {

        if (n[i] % 2 == 0)
        {
            printf("É um número par: %d\n", n[i]);
        }
        else
        {
            printf("É um número impar: %d\n", n[i]);
        }
    }
    printf("A quantidade de números pares é: %d\n", par);
    printf("A quantidade de números impares é: %d\n", impar);
}