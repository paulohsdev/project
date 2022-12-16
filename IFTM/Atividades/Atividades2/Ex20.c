#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string.h>

typedef struct
{
    int id, hora, minutos, segundos;
} cadastro;

int main()
{

    setlocale(LC_ALL, "");

    int i, j;

    cadastro cad[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite a identificação do funcionário: ");
        scanf("%d", &cad[i].id);

        printf("Digite a hora de inicio: \n");
        scanf("%d%d%d", &cad[i].hora, &cad[i].minutos, &cad[i].segundos);
    }
}