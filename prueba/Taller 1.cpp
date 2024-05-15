#include <stdio.h>
#define TASA_DESCUENTO 0.1
#include <stdlib.h>
#include <unistd.h>

float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0, res;

    for (i = 0; i < cantidad; ++i)
        suma += valores[i];
        res=suma / (float) cantidad;
    return res;
}

int main()
{
    
    int n, i, x=1, primos_por_mostrar, d, es_primo;
    float y= 2, r, res;
    //punto 2
    r=(x+2*y)/(3*x-y);
    printf("El resultado es %f",r);
    //punto 3
    res=(r-(r*TASA_DESCUENTO));
    printf("\n\nEl resultado con descuento es %f ",res);    
    //fflush(stdin);
    //punto 4
    printf("\n\nCuantos primos desea mostrar: ");
    scanf("%d", &primos_por_mostrar);
    n = 2;
    while (primos_por_mostrar > 0) 
    {
        es_primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) 
            {
                es_primo = 0;
                break;
            }
        }
        if (es_primo) {
            printf("%d ", n);
            primos_por_mostrar--;
        }
        n++;
    }
    
    fflush(stdin);
        //punto 5
    char op;
    float num1, num2;
    i=0;
    while (i=0)
    {
    printf("\n\nintroduce dos números que quieras sumar/restar/multiplicar/dividir");
    printf("\nintroduce el primer número: ");
    scanf("%f",&num1);
    fflush(stdin);
    printf("\nintroduce el segundo número: ");
    scanf("%f",&num2);
    fflush(stdin);
    printf("\nescoje\n");
    printf("+) SUMAR\n");
    printf("-) RESTAR\n");
    printf("*) MULTIPLICAR\n");
    printf("/) DIVIDIR\n\n");
    scanf("%c",&op);
    fflush(stdin);
    switch (op)
    {
        case '+':
        {
            res=num1+num2;
            printf("\nEl resultado es %f",res);
        }
        break;
        case '-':
        {
            res=num1-num2;
            printf("\nEl resultado es %f",res);
        }
        break;
        case '*':
        {
            res=num1*num2;
            printf("\nEl resultado es %f",res);
        }
        break;
        case '/':
        {
            res=num1/num2;
            printf("\nEl resultado es %f",res);
        }
        break;
        default:
        {
            printf("adios");
            i++;
        }
    }
    }
    fflush(stdin);
    //parte 6
    srand(getpid());
    int aleatorio(int minimo , int maximo);
    int num= aleatorio(1, 100);
    int intento;
    i=1;
     printf("Selecciona un número del 1 al 100 y te dire si adivinaste");
    while (i=1)
    {
        scanf("%d",&intento);
        if(intento == num)
        {
            printf("Lo encontraste felicidades");
            i++;
        }
        else
        {
            printf("fALLASTE INTENTA OTRA VEZ");
            if (intento < num)
            {
                for (n=intento; n == num; n++)
                {
                    if (n>15)
                    {
                        printf("Muy lejos");
                    }
                    else
                    {
                        printf("Estas cerca");
                    }
                    
                }
                
            }
            else
            {
                for (n=intento; n == num; n--)
                {
                    if (n>-15)
                    {
                        printf("Muy lejos");
                    }
                    else
                    {
                        printf("Estas cerca");
                    }
                    
                }
            }
            
        }

    }
    //parte 7
    int factorial;
    printf("\n\nDame un número y te doy su factorial: ");
    scanf("&d",&n);
    if(n=1)
    {
        factorial = 1;
    }
    else
    {
        for (n; n = 1; n--)
        {
            factorial=factorial*n;
        }
    }
    //parte 8

    fflush(stdin);
    int cali[10];
    for (i = 0; i < 10; ++i) 
    {
        printf("  calificacion:  %d: ", i + 1);
        scanf("%d", &cali[i]);
    }
    printf("El promedio es %.1f\n", promedio(cali, 10));
    for ( x = 0; x < 10; x++)
    {
        for (i = 0,d=1; d < 10; i++,d++)
        {
            if (cali[i]>cali[d])
            {
                int temp=cali[d];
                cali[d]=cali[i];
                cali[i]=temp;
            }
            
        }
        for (x = 0; x < 10; x++)
        {
            printf("\n%d",cali[x]);
        }   
    }
    //parte 9
    primos_por_mostrar=5;
    n=2;
    while (primos_por_mostrar > 0) 
    {
        es_primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = 0;
                printf(" 0 ");
                break;
            }
        }
        if (es_primo) {
            printf(" 1 ");
            primos_por_mostrar--;
        }
        n++;
    }

    //parte 10

    
    float base, e, calcularpotencia(base, e);
    printf("\n\nDame la base");
    scanf("%f",&base);
    printf("Dame la exponente");
    scanf("%f",&e);
    base=base^e;
    printf("%f",base);
    
}
