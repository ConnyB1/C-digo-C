#include <stdio.h>
int main()
{
    char op;
    float num1, num2, res;
    printf("introduce dos números que quieras sumar/restar/multiplicar/dividir");
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
    }
}