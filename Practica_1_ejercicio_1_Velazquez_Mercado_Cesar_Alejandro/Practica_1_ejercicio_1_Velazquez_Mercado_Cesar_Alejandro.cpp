//Alejandro Velazquez
#include <stdio.h>
int main()
{
    int limite;
    int resultado = 0;

    printf("ingrese un número entero positivo");
    scanf("%d",&limite);
    for (int i=1; i<=limite; i++)
    {
        resultado +=i;

    }
    printf("La suma de los primeros %d números es: %d\n", limite, resultado);
    return 0;
}