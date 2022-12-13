#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

float base,area,altura,perimetro,diagonal;

printf("Digite o valor da base: \n");
scanf("%f", &base);


printf("Digite o valor da altura: \n");
scanf("%f", &altura);

area = base*altura;
perimetro = 2*(base+altura);
diagonal = sqrt(pow(base,2)+pow(altura,2));

printf("A área é: %.2f o perímetro é: %.2f e a diagonal é: %.2f",area,perimetro,diagonal);

return 0;

}