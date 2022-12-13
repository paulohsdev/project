#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float pe, polegadas, milha, jardas;

    printf("Digite o número de pés: ");
    scanf("%f", &pe);

    polegadas = pe * 12;
    jardas = pe * 3;
    milha = jardas / 1760;

    printf("Polegadas %.2f\nJardas %.2f\nMilha %f\n", polegadas, jardas, milha);

    return 0;
}