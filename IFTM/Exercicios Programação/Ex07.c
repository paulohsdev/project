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

printf("Seu nome é %s e seu sobrenome é %s\n", nome,sobrenome);
printf("Seu sobrenome é %s e seu nome é %s", sobrenome,nome);

return 0;
}