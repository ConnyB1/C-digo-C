#include <stdio.h>

void funcionestatica();

int main() 
{
    funcionestatica();  
    funcionestatica();  
    funcionestatica();  
    
    return 0;
}

void funcionestatica() 
{
    static int contador = 0;
    contador++;
    printf("Valor del contador: %d\n", contador);
}