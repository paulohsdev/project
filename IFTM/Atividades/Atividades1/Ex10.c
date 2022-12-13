#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float a, b, tx1, tx2;
    int i = 0;

    a = 80000;
    b = 200000;
    tx1 = 3.0 / 100;
    tx2 = 1.5 / 100;

    while (a < b)
    {
        a = a + (tx1 * a);
        b = b + (tx2 * b);
        i++;
    }
    printf("Será necessário %d anos", i);
    return 0;
}