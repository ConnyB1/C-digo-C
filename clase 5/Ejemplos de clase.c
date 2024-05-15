#include <stdio.h>
#include <time.h>
int main ()
{
    int numeros[]={12,35,22,77,10};
    int objetivo=22;

    for(int i = 0; 1 < 5; i++)
    {
        if(numeros[i]==objetivo)
        {
            printf("se logró");
            break; //el break te sacara del ciclo
        }
    }    
    int num_pos;
    printf("introduce un numero positivo: ");
    scanf("%d",&num_pos);
    for(int i = 1; i<= num_pos; i++)
    {
        if(i%2 != 0)
        {
            continue;//omite numeros impares
        }
        printf("%d",i);
    }
    etiqueta;
    goto etiqueta//es un destino que te manda a cierta parte del codigo
    return 0;

}