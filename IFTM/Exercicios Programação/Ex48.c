#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while (idade != 0)
    {
        if (idade < 5)
        {
            printf("Idade inválida !!!\n");
        }
        if (idade >= 5 && idade <= 7)
        {
            printf("Infantil A\n");
        }
        if (idade >= 8 && idade <= 10)
        {
            printf("Infantil B\n");
        }
        if (idade >= 11 && idade <= 13)
        {
            printf("Juvenil A\n");
        }
        if (idade >= 14 && idade <= 17)
        {
            printf("Juvenil B\n");
        }
        if (idade >= 18)
        {
            printf("Sênior\n");
        }

        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }
}