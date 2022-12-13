#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "");

    float valor, moeda50, moeda25, moeda10, moeda05, moeda01, troco;
    int nota100, nota200, nota50, nota20, nota10, nota5, nota2, moeda1, n1, moedas;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    n1 = valor;

    nota200 = n1 / 200;
    nota100 = n1 % 200 / 100;
    nota50 = n1 % 200 % 100 / 50;
    nota20 = n1 % 200 % 100 % 50 / 20;
    nota10 = n1 % 200 % 100 % 50 % 20 / 10;
    nota5 = n1 % 200 % 100 % 50 % 20 % 10 / 5;
    nota2 = n1 % 200 % 100 % 50 % 20 % 10 % 5 / 2;
    moeda1 = n1 % 200 % 100 % 50 % 20 % 10 % 5 % 2 / 1;
    troco = (valor - n1) * 100;
    moedas = troco;
    moeda50 = moedas / 50;
    moeda25 = moedas % 50 / 25;
    moeda10 = moedas % 50 % 25 / 10;
    moeda05 = moedas % 50 % 25 % 10 / 5;
    moeda01 = moedas % 50 % 25 % 10 % 5 / 1;

    printf("%d Notas de 200 reais\n", nota200);
    printf("%d Notas de 100 reais\n", nota100);
    printf("%d Notas de 50 reais\n", nota50);
    printf("%d Notas de 20 reais\n", nota20);
    printf("%d Notas de 10 reais\n", nota10);
    printf("%d Notas de 5 reais\n", nota5);
    printf("%d Notas de 2 reais\n", nota2);
    printf("%d Moeda de 1 real\n", moeda1);
    printf("%d Moeda de 0,50 centavos\n", moeda50);
    printf("%.0f moedas de 0,25 centavos\n", moeda25);
    printf("%.0f moedas de 0,10 centavos\n", moeda10);
    printf("%.0f moedas de 0,05 centavos\n", moeda05);
    printf("%.0f moedas de 0,01 centavos\n", moeda01);

    return 0;
}