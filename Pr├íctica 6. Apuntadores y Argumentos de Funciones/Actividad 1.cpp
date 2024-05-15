#include <stdio.h>
#include "Funciones.h"

int menu();
int sumaA(int *arr, int tam);
int llenararregl(int arreglo[], int tam);

int main() 
{
    int check, arreglo[5], tam = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Llena el arreglo con 5 números\n\n");
    llenararregl(arreglo, tam);

    do 
    {
        check = menu();
        if (check == 1) 
        {
            int resultado = sumaA(arreglo, tam);
            printf("La suma de elementos en el arreglo es: %d\n", resultado);
        }
    } while (check != 0);

    return 0;
}

int menu()
{
    printf("\n\n\tMenu\n");
    printf("1. Suma de elementos en un arreglo\n");
    printf("2. Copia de arreglos\n");
    printf("3. Concatenación de arreglos\n");
    printf("4. Comparación de arreglos\n");
    printf("5. Encontrar el elemento máximo\n");
    printf("0. Salir\n");
    int op = valinum(0,5);
    return op;
}

int llenararregl(int arreglo[], int tam)
{
    for (int i = 0; i < tam; i++) 
    {
        printf("Dame un valor cualquiera: ");
        scanf("%d", &arreglo[i]);
    }
    return arreglo[5];
}

int sumaA(int *arr, int tam) {
    int suma = 0, *ptr = arr;
    for (int i = 0; i < tam; i++) {
        suma += *ptr;
        ptr++;
    }
    return suma;
}