#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  char sexo;
  float pesoideal, altura;

  printf("Digite o seu sexo M/F: \n");
  scanf("%c", &sexo);

  printf("Qual a sua altura?\n");
  scanf("%f", &altura);

  if (sexo == 77 || sexo == 109)
  {
    pesoideal = (72.7 * altura) - 58;
  }
  if (sexo == 102 || sexo == 70)
  {
    pesoideal = (62.1 * altura) - 44.7;
  }

  printf("Seu peso ideal é %.2f kg.", pesoideal);
}
