#include <stdio.h>

float pi = 3.14159;
void funcion();

int main() 
{
    printf("Variable global pi desde la función main: %lf\n", pi);
    funcion();
    printf("Variable global despues: %lf\n", pi);
    
    return 0;
}

void funcion() 
{
    float pi = 3.14;
    printf("Variable local pi dentro de la función: %lf\n", pi);
}