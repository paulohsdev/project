#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");

    float laboratorio, avaliacao, exame, media;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &laboratorio);

    printf("Digite a nota de avaliação semestral: ");
    scanf("%f", &avaliacao);

    printf("Digite a nota do exame final: ");
    scanf("%f", &exame);

    media = ((laboratorio * 2) + (avaliacao * 3) + (exame * 5)) / 10;

    printf("A média é igual a:", media);

    if (media >= 0 && media <= 4.9)
    {

        printf("A média é igual a:", media);
        printf("O conceito do aluno foi: E");
    }
    else if (media >= 5 && media <= 5.9)
    {
        printf("A média é igual a:", media);
        printf("O conceito do aluno foi: D");
    }
    else if (media >= 6 && media <= 6.9)
    {
        printf("A média é igual a:", media);
        printf("O conceito do aluno foi: C");
    }
    else if (media >= 6 && media <= 6.9)
    {
        printf("A média é igual a:", media);
        printf("O conceito do aluno foi: C");
    }
    else if (media >= 7 && media <= 7.9)
    {
        printf("A média é igual a:", media);
        printf("O conceito do aluno foi: B");
    }
    else if (media >= 8 && media <= 10)
    {
        printf("A média é igual a:", media);
        printf("O conceito do aluno foi: A");
    }
    return 0;
}
