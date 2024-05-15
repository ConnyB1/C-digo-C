#include <stdio.h>

int main()
{
    int opcion;
    do 
    {
        
        float res;
        printf("\n\nDime que area quieres sacar? \n\n");
        printf("1) Triángulo\n ");
        printf("2) Circulo\n ");
        printf("3) Rectángulo\n ");
        printf("4) Cubo\n ");
        printf("5) Cilindro\n ");
        printf("6) Salir\n ");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
            {
                float base, altura;
                printf("Dame la base del triangulo: ");
                scanf("%f",&base);
                printf("Dame la altura del triangulo: ");
                scanf("%f",&altura);
                res=(base*altura)/2;
                printf("La area del triangulo es: %.2f", res);
            }
            break;
            case 2:
            {
                float radio;
                printf("Dame el radio del circulo: ");
                scanf("%f",&radio);
                res=((radio*radio)*3.14);
                printf("La area del radio del circulo: %.2f", res);
            }
            break;
            case 3:
            {
                float base, altura;
                printf("Dame la base del rectangulo: ");
                scanf("%f",&base);
                printf("Dame la altura del rectangulo: ");
                scanf("%f",&altura);
                res=(base*altura);
                printf("La area del rectangulo es: %.2f", res);
            }
            break;
            case 4:
            {
                float base, altura;
                printf("Dame la base del cubo: ");
                scanf("%f",&base);
                printf("Dame la altura del cubo: ");
                scanf("%f",&altura);
                res=(base*altura)*6;
                printf("La area del cubo es: %.2f", res);
            }
            break;
            case 5:
            {
                float radio, altura;
                printf("Dame radio del cilindro: ");
                scanf("%f",&radio);
                printf("Dame la altura del cilindro: ");
                scanf("%f",&altura);
                res=((2*3.14*radio*altura)+(2*3.14*(radio*radio)));
                printf("La area del cilindro es: %.2f", res);
            }
            break;
            default:
            {
                printf("Adiios");
            }
        }

    }while(opcion<=5 && opcion>=1);
    
}