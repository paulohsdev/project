#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float cateto1,cateto2,hipotenusa,raiz;


printf("Digite o valor do 1º cateto: ");
scanf("%f", &cateto1);

printf("Digite o valor do 2º cateto: ");
scanf("%f", &cateto2);

cateto1 = pow(cateto1,2);
cateto2 = pow(cateto2,2);

hipotenusa = cateto1+cateto2;
raiz = sqrt(hipotenusa);

printf("O valor da hipotenusa é %.2f", raiz);

return 0;

}