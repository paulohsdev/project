#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int idade;
    char nome[10];

    printf("Qual seu nome: ");
    scanf("%s", &nome);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    if (idade <= 10)
    {
        printf("%s, o valor do plano será R$30,00 reais", nome);
    }
    if (idade >= 11 && idade <= 29)
    {
        printf("%s, o valor do plano será R$60,00 reais", nome);
    }
    if (idade >= 30 && idade <= 45)
    {
        printf("%s, o valor do plano será R$120,00 reais", nome);
    }
    if (idade >= 46 && idade <= 59)
    {
        printf("%s, o valor do plano será R$150,00 reais", nome);
    }
    if (idade >= 60 && idade <= 65)
    {
        printf("%s, o valor do plano será R$250,00 reais", nome);
    }
    if (idade > 65)
    {
        printf("%s, o valor do plano será R$400,00 reais", nome);
    }
}