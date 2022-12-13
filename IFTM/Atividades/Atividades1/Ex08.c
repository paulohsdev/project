#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    int n1, n2, contador, mmc;

    contador = 1;

    printf("Digite o maior número primeiro : \n");
    scanf("%d", &n1);

    printf("Digite o menor número em seguida: \n");
    scanf("%d", &n2);

    while (contador < n1 * n2)
    {
        if (contador % n1 == 0 && contador % n2 == 0)
        {
            mmc = contador;
            break;
        }
        else
        {
            contador++;
        }
    }
    printf("O MMC é: %d\n", mmc);
    return 0;
}