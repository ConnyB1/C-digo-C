//Nombre del archivo: Practica 4.
//Autor: Cesar Alejandro Velazquez Mercado
//Fecha de creación: 21 de septiembre de 2023
//Descripción: Me saca el fibonacci sin recursividad.
#include <stdio.h>
#include <stdlib.h>

void calcularFibonacci(int n);
int main()
{
    int n, op;
    do
    {
        printf("Dame un numero: ");
        scanf("%d",&n);
        calcularFibonacci(n);
        printf("\n\ndeseas calcular otro numero?");
        printf("\n1)si\t2)no\n");
        scanf("%d",&op);
    } while (op==1);
    printf("Adios");
}

void calcularFibonacci(int n)
{   
    if(n<=1)
    {
        printf("Fibonacci es: %d",n);
    }
    else
    {
         int a = 0, b = 1, resultado;
        for (int i=2; i<=n; i++)
        {
            resultado = a + b;
            a = b;
            b = resultado;
        }
        printf("El termino %d de la serie fibonacci es: %d", n, resultado);
    }
}