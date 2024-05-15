//Cesar Alejandro Velazquez Mercado
//372329
//Me dice la tabla de multiplicar de un numero del 1 al 20
//10/09/2023
#include <stdio.h>

int main()
{
    int num;
    printf("Dame un numero: ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("El numero es 0");
    }
    else
    {
        if(num>0)
        {
            printf("Es positivo");
        }
        else
        {
            printf("Es negativo");
        }
    }

}