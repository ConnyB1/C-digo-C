#include <stdio.h>

int main() 
{
    register int temp = 10;
    int valor = 20;
    printf("Valor de temp (registro): %d\n", temp);
    printf("Valor de valor (automática): %d\n", valor);
    
    return 0;
}
