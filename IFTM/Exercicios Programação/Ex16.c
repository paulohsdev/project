#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int nascimento, anoatual, anos, meses, semanas, dias;

    printf("Em qual ano você nasceu? ");
    scanf("%d", &nascimento);

    printf("Digite o ano atual? ");
    scanf("%d", &anoatual);

    anos = anoatual - nascimento;
    meses = anos * 12;
    semanas = 30 / 7 * meses;
    dias = anos * 365;

    printf("A sua idade atual é: %d anos \nIsso equivale a %d meses \ne a %d semanas \ne a %d dias.", anos, meses, semanas, dias);

    return 0;
}