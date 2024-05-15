#include <stdio.h>

#include "archivo.h"

void modificarsaldo();

int main()
{
    saldo=0;

    modificarsaldo();

    printf("Saldo final: %d\n", saldo);
    return 0;
}

int saldo;

void modificarsaldo()
{
    saldo += 100; 
}