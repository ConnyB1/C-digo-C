#include <stdio.h>

void funcionContador();

int main() {
    for (int i = 0; i < 10; i++) 
    {
        funcionContador();
    }
    return 0;
}

void funcionContador() 
{
    int contador = 0; 
    for (int i = 0; i < 10; i++) 
    {
        contador++;
        printf("Valor del contador en la iteración %d: %d\n", i + 1, contador);
    }
}