#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

int n1;

printf("Digite um n�mero: ");
scanf("%d", &n1);

n1 = n1 + 1;
printf("O seu sucessor �: %d\n", n1);

n1 = n1-1;

printf("O seu antecessor �: %d", n1);

return 0;

}