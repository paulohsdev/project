#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1;
    setlocale(LC_ALL, "");

    system("cls");
    printf("Digite um número: ");
    scanf("%d", &n1);

    while (n1 != 0)
    {

        if (n1 % 2 == 0)
        {
            printf("Número Par\n");
        }

        if (n1 % 2 == 1)
        {
            printf("Número ímpar\n");
        }

        printf("Digite um número: ");
        scanf("%d", &n1);
    }
}