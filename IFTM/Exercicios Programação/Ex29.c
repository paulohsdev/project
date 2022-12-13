#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int n1, n2, soma;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if (soma > 20)
    {
        soma = soma + 8;
    }

    if (soma < 20)
    {
        soma = soma - 5;
    }

    printf("%d", soma);
}
