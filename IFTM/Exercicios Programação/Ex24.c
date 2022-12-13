#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    int n1, n2, n3, nconta, inverso, soma, multiplicador, digitoverificador;

    printf("Digite o primeiro numeros: ");
    scanf("%d", &n1);

    printf("Digite o segundo numeros: ");
    scanf("%d", &n2);

    printf("Digite o segundo numeros: ");
    scanf("%d", &n3);

    nconta = (n1 * 100) + (n2 * 10) + (n3 * 1);
    inverso = (n3 * 100) + (n2 * 10) + (n1 * 1);
    soma = nconta + inverso;
    multiplicador = (soma / 109 * 1) + (soma / 127 * 2) + (soma / 109 * 3);
    printf("O multiplicador �: %d\n", multiplicador);
    digitoverificador = multiplicador / (multiplicador + 1);
    printf("O digito verificador da conta �: %d", digitoverificador);
}
