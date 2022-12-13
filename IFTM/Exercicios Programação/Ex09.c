#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float porcao_carne, batata_frita, cerveja, agua, refrigerante,subtotal,tx,total;


printf("Quantas porções foram consumidas?\n ");
scanf("%f", &porcao_carne);

printf("Quantas porções de batata frita?\n ");
scanf("%f", &batata_frita);

printf("Quantas cervejas foram consumidas?\n ");
scanf("%f", &cerveja);

printf("Quantas garrafas de água foram consumidas?\n ");
scanf("%f", &agua);

printf("Quantos refrigerantes foram pedidos?\n ");
scanf("%f", &refrigerante);

printf("Digite o valor da taxa: \n ");
scanf("%f", &tx);


porcao_carne = porcao_carne*50;
batata_frita = batata_frita*30;
cerveja = cerveja*10;
agua = agua*3;
refrigerante = refrigerante*6;

subtotal = porcao_carne+batata_frita+cerveja+agua+refrigerante;
tx = subtotal*(tx/100);
total = subtotal+tx;

printf("O valor total é: R$ %.2f reais.", total);

return 0;
}