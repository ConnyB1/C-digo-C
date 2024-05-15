#include <stdio.h>

#include "archivo.h"

void sumasaldo(int cantidad);
void restarsaldo(int cantidad);

int main()
{
    saldo=0;

    sumasaldo(100);
    restarsaldo(20);

    printf("otroarchivo.c - saldo final: %d\n", saldo);

    return 0;
}