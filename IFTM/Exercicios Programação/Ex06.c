#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float salario,vquilowatts,consumoquilowatts,total,totalcomdesconto,desconto;


printf("Digite o valor do sal�rio m�nimo: \n");
scanf("%f", &salario);

printf("Quantos quilawattas foram gastos?: \n");
scanf("%f", &consumoquilowatts);


vquilowatts = salario/7/100;
total = vquilowatts*consumoquilowatts;
totalcomdesconto = total-(total*0.1);

printf("O valor por quilowatts �: R$ %.2f reais.\n", vquilowatts);
printf("O valor total a ser pago sem desconto �: R$ %.2f reais.\n",total);
printf("O valor total com 10%% de desconto �: R$ %.2f reais.\n", totalcomdesconto); 

return 0;

}