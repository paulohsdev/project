#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");
    system("cls");

    float trabalho1, avaliacao, trabalhofinal, media;

    printf("Digite a nota do trabalho de laboratório:\n ");
    scanf("%f", &trabalho1);

    printf("Digite a nota da avaliação trimestral:\n ");
    scanf("%f", &avaliacao);

    printf("Digite a nota do trabalho final:\n ");
    scanf("%f", &trabalhofinal);

    media = (trabalho1 + avaliacao + trabalhofinal) / 3;

    printf("A média do aluno foi: %.2f\n", media);

    if (media > 0 && media < 4.9)
        printf("O conceito do aluno foi E.");

    if (media > 5 && media <= 5.9)
        printf("O conceito do aluno foi D.");

    if (media >= 6 && media <= 6.9)
        printf("O conceito do aluno foi C.");

    if (media >= 7 && media <= 7.9)
        printf("O conceito do aluno foi B.");

    if (media >= 8 && media <= 10)
        printf("O conceito do aluno foi A.");

    return 0;
}
