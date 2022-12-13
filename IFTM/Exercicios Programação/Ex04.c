#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float volume,h,raio;
float pi = 3.14159;

printf("Digite o valor do raio: \n");
scanf("%f", &raio);

printf("Digite o valor da altura: \n");
scanf("%f", &h);

volume = pi*(pow(raio,2))*h;

printf("O volume total é: %.2f cm³.", volume);

return 0;

}