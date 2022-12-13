#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float prestacao,valor,taxa,tempo;

printf("Digite o valor da prestação em atraso: \n");
scanf("%f", &valor);

printf("Digite a taxa de juros: \n");
scanf("%f", &taxa);

printf("Digite quantos dias de atraso: \n");
scanf("%f", &tempo);


prestacao = valor+(valor*(taxa/100/30)*tempo);

printf("O valor da prestação é: R$ %.2f reais.", prestacao);

return 0;
}