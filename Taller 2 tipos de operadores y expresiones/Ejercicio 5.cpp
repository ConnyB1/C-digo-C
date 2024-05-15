#include <stdio.h>

int main()
{
    int año, re;
    printf("Dame un año cualquiera: ");
    scanf("%d",&año);
    re=año%4;
    if(re==0)
    {
        printf("Es un año bisiesto ");
    }
    else
    {
        printf("No es un año bisiesto ");
    }
}