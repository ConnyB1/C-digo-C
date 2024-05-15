#include <stdio.h>
int saldo;


void restarsaldo(int cantidad)
{
    saldo -= cantidad;
}

void sumarsaldo(int cantidad)
{
    saldo += cantidad;
}