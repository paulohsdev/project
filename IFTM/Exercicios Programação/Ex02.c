#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

int n1;

printf("Digite um número: ");
scanf("%d", &n1);

n1 = n1 + 1;
printf("O seu sucessor é: %d\n", n1);

n1 = n1-1;

printf("O seu antecessor é: %d", n1);

return 0;

}