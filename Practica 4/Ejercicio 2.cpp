//Nombre del archivo: Practica 4.
//Autor: Cesar Alejandro Velazquez Mercado
//Fecha de creación: 21 de septiembre de 2023
//Descripción: Me saca el fibonacci con recursividad.
#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n,op;
    do
    {
        printf("Dame un numero para fibonacci: ");
        scanf("%d", &n);
        printf("Fibonacci:\n");
        for (int i = 0; i <= n; i++) 
            {
                printf("%d ", fibonacci(i));
            }
        printf("\n\ndeseas calcular otro numero?");
        printf("\n1)si\t2)no\n");
        scanf("%d",&op);
        printf("\n\n\n");
    }while (op==1);
    
}

int fibonacci(int n) 
{
    if (n <= 1) 
        {
            return n;
        } 
    else 
        {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
}