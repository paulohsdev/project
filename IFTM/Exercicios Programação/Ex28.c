#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int n1, contador;
    contador = 1;

    system("cls");
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    while (n1 < 20)
    {

        contador = contador + 1;

        printf("Digite um n�mero: ");
        scanf("%d", &n1);
    }

    printf("Esse n�mero � maior que 20...%d\n", n1);
    printf("O valor do contador �: %d", contador);
}