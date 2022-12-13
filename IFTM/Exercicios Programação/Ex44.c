#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float altura, peso, imc;

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);
    printf("Seu IMC �: %.2f\n", imc);

    if (imc < 18.5)
    {
        printf("Voc� est� Abaixo do Peso !\n");
    }
    if (imc > 18.5 && imc < 25)
    {
        printf("Voc� est� com Peso Normal !\n");
    }
    if (imc > 25 && imc < 30)
    {
        printf("Voc� est� com Sobrepeso !\n");
    }
    if (imc > 30 && imc < 35)
    {
        printf("Voc� est� com Obesidade Grau I !\n");
    }
    if (imc > 35 && imc < 40)
    {
        printf("Voc� est� com Obesidade Grau II !\n");
    }
    if (imc > 40)
    {
        printf("Voc� est� com Obesidade Grau III !\n");
    }
}