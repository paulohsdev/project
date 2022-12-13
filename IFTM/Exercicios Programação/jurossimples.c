#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");

float vlinicial,txjuros,montante,subtotal,vlinvestido,juros;
int periodo;

printf("Qual o montante inical? \n");
scanf("%f",&montante);

printf("Quantos meses de investimento? \n");
scanf("%d",&periodo);

printf("Qual a taxa de juros anual? \n");
scanf("%f",&txjuros);

txjuros = txjuros/100/12;

subtotal= montante*pow((1+txjuros),periodo);
juros = subtotal-montante;
vlinvestido = montante-juros;


printf("O valor total será de: R$%.2f\n",subtotal);
printf("O rendimento foi de R$ %.2f\n",juros);

}