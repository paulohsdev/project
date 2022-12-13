#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{

        setlocale(LC_ALL, "");
        system("cls");

        float peso, dosagem;
        int idade;

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu peso: ");
        scanf("%f", &peso);

        if (idade <= 12)
        {
                if (peso >= 5 && peso <= 9)
                {
                        dosagem = 125 / (500 / 20);
                        printf("Esse paciente deve tomar: %.f gotas correspondendo a 125mg", dosagem);
                }
                if (peso >= 9.1 && peso <= 16)
                {
                        dosagem = 250 / (500 / 20);
                        printf("Esse paciente deve tomar: %.f gotas correspondendo a 250mg", dosagem);
                }
                if (peso >= 16.1 && peso <= 24)
                {
                        dosagem = 375 / (500 / 20);
                        printf("Esse paciente deve tomar: %.f gotas correspondendo a 375mg", dosagem);
                }
                if (peso >= 24.1 && peso <= 30)
                {
                        dosagem = 500 / (500 / 20);
                        printf("Esse paciente deve tomar: %.f gotas correspondendo a 500mg", dosagem);
                }
                if (peso > 30)
                {
                        dosagem = 750 / (500 / 20);
                        printf("Esse paciente deve tomar: %.f gotas correspondendo a 750mg", dosagem);
                }
        }

        if (idade > 12 && peso > 60)
        {
                dosagem = 1000 / (500 / 20);
                printf("Esse paciente deve tomar: %.f gotas correspondendo a 1000mg", dosagem);
        }
        if (idade > 12 && peso < 60)
        {
                dosagem = 875 / (500 / 20);
                printf("Esse paciente deve tomar: %.f gotas correspondendo a 875mg", dosagem);
        }
}