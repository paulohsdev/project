#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{

  setlocale(LC_ALL, "");
  system("cls");

  char procedencia[20];
  int sul, norte, leste, oeste, nordeste, sudeste, centrooeste, noroeste;

  sprintf("%d", sul, procedencia);

  printf("Digite o código: ");
  scanf("%s", &procedencia);
  sul = strcmp(procedencia, "1");

  norte = strcmp(procedencia, "2");
  leste = strcmp(procedencia, "3");
  oeste = strcmp(procedencia, "4");
  nordeste = strcmp(procedencia, "5");
  nordeste = strcmp(procedencia, "6");
  sudeste = strcmp(procedencia, "7");
  sudeste = strcmp(procedencia, "9");
  sudeste = strcmp(procedencia, "10");
  centrooeste = strcmp(procedencia, "11");
  centrooeste = strcmp(procedencia, "12");
  centrooeste = strcmp(procedencia, "13");
  centrooeste = strcmp(procedencia, "14");
  centrooeste = strcmp(procedencia, "15");
  centrooeste = strcmp(procedencia, "16");
  centrooeste = strcmp(procedencia, "17");
  centrooeste = strcmp(procedencia, "18");
  centrooeste = strcmp(procedencia, "19");
  centrooeste = strcmp(procedencia, "20");
  noroeste = strcmp(procedencia, "21");
  noroeste = strcmp(procedencia, "22");
  noroeste = strcmp(procedencia, "23");
  noroeste = strcmp(procedencia, "24");
  noroeste = strcmp(procedencia, "25");
  noroeste = strcmp(procedencia, "26");
  noroeste = strcmp(procedencia, "27");
  noroeste = strcmp(procedencia, "28");
  noroeste = strcmp(procedencia, "29");
  noroeste = strcmp(procedencia, "30");

  if (sul == 0)
  {
    printf("Procedência do Sul");
  }
  if (norte == 0)
  {
    printf("Procedência do Norte");
  }
  if (leste == 0)
  {
    printf("Procedência do Leste");
  }
  if (oeste == 0)
  {
    printf("Procedência do Oeste");
  }
  if (nordeste == 0)
  {
    printf("Procedência do Nordeste");
  }
  if (sudeste == 0)
  {
    printf("Procedência do Sudeste");
  }
  if (centrooeste == 0)
  {
    printf("Procedência do Centro-Oeste");
  }
  if (noroeste == 0)
  {
    printf("Procedência do Noroeste");
  }
}