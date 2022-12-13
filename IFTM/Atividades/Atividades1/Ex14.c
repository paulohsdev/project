#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "");

  char sexo[5], produto[5];
  int responderamsim, responderamnao, mresponderamsim, hresponderamnao, hresponderamsim, rs, rn, sexof, sexom, contador;
  float porcentagemhomens;

  hresponderamnao = 0;
  responderamnao = 0;
  responderamsim = 0;
  sexof = 0;
  sexom = 0;
  rs = 0;
  rn = 0;
  mresponderamsim = 0;
  hresponderamnao = 0;
  contador = 0;

  while (contador < 10)
  {
    contador++;
    printf("Qual seu sexo F/M: ");
    scanf("%s", &sexo);

    printf("Você gostou do produto S/N: ");
    scanf("%s", &produto);

    responderamsim = strcmp(produto, "S");
    responderamnao = strcmp(produto, "N");
    sexof = strcmp(sexo, "F");
    sexom = strcmp(sexo, "M");

    if (responderamsim == 0)
    {
      rs++;
    }
    if (responderamnao == 0)
    {
      rn++;
    }
    if (sexof == 0 && responderamsim == 0)
    {
      mresponderamsim++;
    }
    if (sexom == 0 && responderamsim == 0)
    {
      hresponderamsim++;
    }
    if (sexom == 0 && responderamnao == 0)
    {
      hresponderamnao++;
    }
  }
  porcentagemhomens = (hresponderamnao * 100) / (hresponderamnao + hresponderamsim);
  printf("Total que respondeu sim: %d\n", rs);
  printf("Total que respondeu não: %d\n", rn);
  printf("Total mulheres responderam sim: %d\n", mresponderamsim);
  printf("Homens que falaram não: %d\n", hresponderamnao);
  printf("Homens que falaram sim: %d\n", hresponderamsim);
  printf("O percentual de homens que responderam não é: %.2f%%\n", porcentagemhomens);
  return 0;
}