#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[10];
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &nome);

    while (nome[i] != '\0')
    {
        printf("%c", nome[i]);
        i++;
    }
    printf("\nEssa palavra tem %d letras\n", i);
    if (i % 2 == 0)
    {
        printf("A quantidade de letras nessa palavra é par\n");
    }
    else
    {
        printf("A quantidade de letras nessa palavra é ímpar\n");
    }
}
