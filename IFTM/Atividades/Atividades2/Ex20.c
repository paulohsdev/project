#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 1000

typedef struct
{
    int horas, min, seg;
} hor;

typedef struct
{
    hor inicio;
    hor fim;
    hor res;
    int difer;
    int conv1;
    int conv2;
    int id;
    float rec;
} cad;

void ler(cad cadas[], int num);
void conv(cad ca[], int num);
void calc(cad c[], int num, float preco);
void mostrar(cad ca[], int num);
int main()
{
    setlocale(LC_ALL, "");
    float valor;
    cad func[n];
    ler(func, n);
    conv(func, n);
    printf("O valor do segundo trabalhado: ");
    scanf("%f", &valor);
    calc(func, n, valor);
    mostrar(func, n);
    return 0;
}
void ler(cad cadas[], int num)
{
    int i = 0;
    printf("ID do funcionário %d: ", i + 1);
    scanf("%d", &cadas[0].id);

    if (cadas[0].id > 0)
    {
        do
        {
            printf("Horário de início (Horas:Minutos:Segundos): ");
            scanf("%d:%d:%d", &cadas[i].inicio.horas, &cadas[i].inicio.min, &cadas[i].inicio.seg);
            printf("HORARIO DE FIM (HORAS:MINUTOS:SEGUNDO): ");
            scanf("%d:%d:%d", &cadas[i].fim.horas, &cadas[i].fim.min, &cadas[i].fim.seg);
            i++;
            printf("ID DO FUNCIONARIO %d: ", i + 1);
            scanf("%d", &cadas[i].id);
        } while (cadas[i].id > 0);
    }
}

void conv(cad ca[], int num)
{
    for (int i = 0; ca[i].id > 0; i++)
    {
        ca[i].conv1 = ca[i].inicio.seg + (ca[i].inicio.min * 60) + (ca[i].inicio.horas * 3600);
        ca[i].conv2 = ca[i].fim.seg + (ca[i].fim.min * 60) + (ca[i].fim.horas * 3600);
        ca[i].difer = ca[i].conv2 - ca[i].conv1;
        ca[i].res.horas = ca[i].difer / 3600.0;
        ca[i].difer = ca[i].difer - ca[i].res.horas * 3600.0;
        ca[i].res.min = ca[i].difer / 60.0;
        ca[i].difer = ca[i].difer - ca[i].res.min * 60;
        ca[i].res.seg = ca[i].difer;
    }
}
void calc(cad c[], int num, float preco)
{
    for (int i = 0; c[i].id > 0; i++)
    {
        float r;
        r = c[i].conv2 - c[i].conv1;
        c[i].rec = r * preco;
    }
}
void mostrar(cad ca[], int num)
{
    for (int i = 0; ca[i].id > 0; i++)
    {
        printf("ID do funcionário: %d\n", ca[i].id);
        printf("Duração da terafa: %d:%d:%d\n", ca[i].res.horas, ca[i].res.min, ca[i].res.seg);
        printf("Valor a receber %.2f\n", ca[i].rec);
    }
}