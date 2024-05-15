//Nombre del archivo: Practica 4.
//Autor: Cesar Alejandro Velazquez Mercado
//Fecha de creación: 21 de septiembre de 2023
//Descripción: Este archivo me da un triagulo de pascal.
#include <stdio.h>

void generarTrianguloPascal(int n);

int main()
{
    int n, op;
    do
    {
        printf("Dime cuantas lines quieres que tenga el triangulo de pascal: ");
        scanf("%d",&n);
        generarTrianguloPascal(n);
        printf("\n\ndeseas calcular otro numero?");
        printf("\n1)si\t2)no\n");
        scanf("%d",&op);
        printf("\n\n\n");
    } while (op==1);
}
void generarTrianguloPascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        int trian=1;
        for (int j = 0; j < n-i-1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%3d ", trian);
            trian=trian*(i-j)/(j+1);
        }
        printf("\n");
    }
}