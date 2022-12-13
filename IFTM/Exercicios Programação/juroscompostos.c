#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");

float tx,aplicacao,total,investido,rendimento;
int periodo;

printf("Qual o valor será aplicado todo mês? \n");
scanf("%f",&aplicacao);

printf("Qual a taxa de juros? \n");
scanf("%f",&tx);

printf("Quantos meses? \n");
scanf("%d",&periodo);

tx =tx/100/12; 

total =  (((pow((1+tx),periodo))-1)*aplicacao)/tx;


investido = aplicacao*periodo;
rendimento = total-investido;

printf("O valor total será de R$ %.2f\n", total);
printf("O valor investido foi de R$ %.2f reais\n",investido);
printf("O rendimento será de R$ %.2f reais.\n",rendimento);

//total = subtotal/tx;

//printf("O total é de R$ %.2f", total);

}