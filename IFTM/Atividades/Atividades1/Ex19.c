#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, i2, n, y;
    float s, fat;
    system("cls");
    printf("Digite um número: ");
    scanf("%d", &n);

    y = n;
    fat = 1;

    for (i2 = 1; i2 <= n; i2++)
    {

        for (i = y; i > 0; i--)
        {
            fat = fat * i;
        }

        if (i2 % 2 == 1)
        {
            s = s + (fat / pow(i2, i2));
        }
        else
        {
            s = s - (fat / (pow(i2, i2)));
        }
        y--;
        fat = 1;
    }

    printf("O valor de fat é: %.2f\n", fat);
    printf("O valor de s é: %.2f\n", s);
}
