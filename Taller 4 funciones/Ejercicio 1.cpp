//Nombre del archivo: Taller 3. Funciones.c
//Autor: Cesar Alejandro Velazquez Mercado
//Fecha de creación: 16 de septiembre de 2023
//Descripción: Este archivo me da el factorial de un nuemero.
#include <stdio.h>

void calcularfactorial(int num);

int main()
{
        int num, n=1;
        while(n==1)
        {
            printf("Dame un numero entero para darte su facctorial: ");
            scanf("%d",&num);
            calcularfactorial(num);
            printf("\n\nDesea calcular otro factorial? ");
            printf("\n1)si\t2)no");
            scanf("%d",&n);

        }
}

void calcularfactorial(int num)
{
    int res=1;
    for(int i=num;i>1;i--)
    {
        res=i*res;
    }
    printf("\n\n%d",res);
}