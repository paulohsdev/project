#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1, n2;
    n2 = 0;

    printf("Digite um número: ");
    scanf("%d", &n1);

    while (n1 != 0)
    {

        if (n1 > n2)
        {
            n2 = n1;
        }

        printf("Digite um número: ");
        scanf("%d", &n1);
    }

    printf("O maior número é: %d", n2);
}
