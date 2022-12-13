#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    char aluno;
    int nota;

    printf("Qual seu nome: ");
    scanf("%s", &aluno);

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota > 100 || nota < 0)
    {
        printf("Nota invalida");
    }
    if (nota == 0)
    {
        printf("SR sem rendimento");
    }
    if (nota >= 1 && nota <= 29)
    {
        printf("II(inferior)");
    }
    if (nota >= 30 && nota <= 49)
    {
        printf("MI(médio inferior)");
    }
    if (nota >= 50 && nota <= 69)
    {
        printf("MM(médio)");
    }
    if (nota >= 70 && nota <= 89)
    {
        printf("MS(médio superior)");
    }
    if (nota >= 90 && nota <= 100)
    {
        printf("SS(superior)");
    }
}