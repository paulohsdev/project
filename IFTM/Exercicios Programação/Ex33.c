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

    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    while (n1 != 0)
    {

        if (n1 > n2)
        {
            n2 = n1;
        }

        printf("Digite um n�mero: ");
        scanf("%d", &n1);
    }

    printf("O maior n�mero �: %d", n2);
}
