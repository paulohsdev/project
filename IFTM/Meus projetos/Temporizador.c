#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "");

    int min, seg, i;

    printf("Informe os minutos e segundos: \n");
    scanf("%d %d", &min, &seg);

    if (min < 0 || seg < 0 || min > 59 || seg > 59 || (min == 0 && seg == 0))
    {
        printf("Valores inválidos tente novamente: ");
    }
    else
    {
        do
        {
            system("cls");
            if (min < 10)
            {
                if (seg < 10)
                {
                    printf("0%d:0%d\n", min, seg);
                }
                else
                {
                    printf("0%d:%d\n", min, seg);
                }
            }
            else if (seg < 10)
            {
                printf("%d:0%d\n", min, seg);
            }
            else
            {
                printf("%d:%d\n", min, seg);
            }

            Sleep(1000);
            if (seg == 0)
            {
                min--;
                seg = 59;
            }
            else
            {
                seg--;
            }
        } while (min != 0 || seg != 0);
        system("cls");
        printf("%d:%d\n", min, seg); // tempo zerado
        printf("TEMPO ESGOTADO\n");

        for (i = 0; i < 5; i++)
        {
            Beep(880, 1000);
            Sleep(500);
        }
    }
    return 0;
}