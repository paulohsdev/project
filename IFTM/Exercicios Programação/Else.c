#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade<17)
    {
        printf("Entrada proibida, você não pode consumir bebida alcoolica!");
    } else{
        printf("Entrada permitida, pode ingerir bebida alcoolica!");
    }
    
}