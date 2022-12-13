#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float nota, mediafinal, contador, media;

    contador = 0;

    while (contador < 3)
    {
        contador++;
        printf("Digite as notas do aluno: ");
        scanf("%f", &nota);
        media = nota + media;

        mediafinal = media / 3;
    }
    if (mediafinal >= 8)
    {
        printf("A média final do aluno foi: %.2f conceito A", mediafinal);
    }
    if (mediafinal >= 5 && mediafinal < 8)
    {
        printf("A média final do aluno foi: %.2f conceito B", mediafinal);
    }
    if (mediafinal < 5)
    {
        printf("A média final do aluno foi: %.2f conceito C", mediafinal);
    }
}