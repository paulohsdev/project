#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1;
    setlocale(LC_ALL, "");

    system("cls");
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    while (n1 != 0)
    {

        if (n1 % 2 == 0)
        {
            printf("N�mero Par\n");
        }

        if (n1 % 2 == 1)
        {
            printf("N�mero �mpar\n");
        }

        printf("Digite um n�mero: ");
        scanf("%d", &n1);
    }
}