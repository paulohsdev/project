#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float produto1,pdesconto,desconto,valorfinal;

printf("Digite o valor do produto: \n");
scanf("%f", &produto1);

printf("Digite o valor do desconto: \n");
scanf("%f", &pdesconto);

desconto = produto1*(pdesconto/100);
valorfinal = produto1-desconto;

printf("O valor do produto �: R$ %.2f\nO valor do desconto � R$ %.2f\nE o valor com desconto �: R$ %.2f",produto1,pdesconto,valorfinal);

return 0;
}