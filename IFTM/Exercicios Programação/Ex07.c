#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
system("cls");
setlocale(LC_ALL,"Portuguese");

char nome[20],sobrenome[20];

printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Digite seu sobrenome: \n");
scanf("%s", &sobrenome);

printf("Seu nome � %s e seu sobrenome � %s\n", nome,sobrenome);
printf("Seu sobrenome � %s e seu nome � %s", sobrenome,nome);

return 0;
}