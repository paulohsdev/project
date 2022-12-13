#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

int n1,centena,dezena,unidade;

printf("Digite um número");
scanf("%d", &n1);

centena =n1/1.28;
dezena = n1/4.56;
unidade = n1/42.66;

printf("%d",unidade);

}