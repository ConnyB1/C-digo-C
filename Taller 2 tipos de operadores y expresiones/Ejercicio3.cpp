#include <stdio.h>

int main()
{
    int num, r;
    printf("Dame un numero: ");
    scanf("%d",&num);
    r=num%2;
    if(r==0)
    {
        printf("Es par y ");
    }
    else
    {
        printf("No es par y ");
    }
    if(num>0)
    {
        printf("es positivo");
    }
    else
    {
        printf("es negativo");
    }
}