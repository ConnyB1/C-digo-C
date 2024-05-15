#include <stdio.h>
#include <limits.h>
int main()
{
    int opcion;
    printf("Dame que quieres hacer\n\n");
    printf("1) Representar un numero en binario\n");
    printf("2) Pasar una calificacion a letras\n");
    printf("3) Gestinar el inventario\n\n");
    scanf("%d",& opcion);
    switch(opcion)
    {
        case 1:
        {
            int num, num2, bit,posi=0;
            printf("\n\nDame un numero entero: ");
            scanf("%d",&num);
            printf("\n\nDime cuantos bits son necesarios para ese numero: ");
            scanf("%d",&num2);
            int lugar[num2];
            if(num<0)
            {
                return 1;
            }
            for(int i=num2;i>=0;i--)
            {
                // positions[num2];
                bit=num<<i;
                if(bit&num)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n\nLos lugares con bits encendidos son: ");
            for(int i = 0; i < posi; i++)
            {
                printf(" %d ",lugar[i]);
            }
            
            //bit encendido
            int indice;
            int bits[num2];
            while (num>0)
            {
                bits[indice]=num%2;
                num/=2;
                indice++;
            }
            
            int bit_encendido=-1, n=0;
            for (int i = 0; i < num2; i++)
            {
                if (bits[i]==1)
                {
                    bit_encendido=i;
                    printf(" %d",bit_encendido+1);
                    n++;
                }
                
            }
            printf("\n\nHubieron %d bits encendidos", n);
            if(bit_encendido==-1)
            {
                printf("No se encontro ningun bit encendidio");
            }
            return 0;
            
        }
        break;
        case 2:
        {
            int cali;
            printf("Dame tu calificacion del 0 al 100: ");
            scanf("%d",&cali);
            if(cali>=80)
            {
                if (cali>=80 && cali<=89)
                {
                    printf("Tu calificaciones es %d que en letras equivale a una: B",cali);
                }
                else
                {
                    if(cali>=90 && cali<=100)
                    {
                    printf("Tu calificaciones es %d que en letras equivale a una: A",cali);
                    }
                }
                
            }
            else
            {
                if(cali>=70 && cali<=79)
                {
                printf("Tu calificaciones es %d que en letras equivale a una: C",cali);
                }
                else
                {
                    if(cali>=60 && cali<=69)
                    {
                    printf("Tu calificaciones es %d que en letras equivale a una: D",cali);
                    }
                    else
                    {
                        if(cali>=0 && cali<=59)
                        {
                        printf("Tu calificaciones es %d que en letras equivale a una: F",cali);
                        }
                    }
                }            
            }   



        }
        break;
        case 3:
        {
            int inventario[10];
            int op, op2;
            printf("Hola, tienes un inventario con 10 espacios eres libre de que hacer con el tienes 10 espacios y para salir excribe 11:");
            for (int i = 0; i <= 10; i++)
            {
                inventario[i]=0; 
            }
            do
            {
                printf("\nA que lugar de tu invetario quieres ir (0-9)? ");
                scanf("%d",&op);
                printf("\n1) para añadir, 2) para eliminar, 3)mostrar inventario 11) para salir: ");
                scanf("%d",&op2);
                if(op2==1)
                    {
                        int text;
                        printf("\n\nque deseas añadir (solo numeros porfavor): ");
                        scanf("%d",&text);
                        inventario[op]=text;
                    }
                if (op2==2)
                    {
                        inventario[op]=0;
                    }
                if(op2==3)
                    {
                        for (int i = 0; i <= 9; i++)
                            {
                                printf(" %d",inventario[i]); 
                            }
                    }
                int n=0;
                for (int i = 0; i <= 9; i++)
                {
                    if (inventario[i]!=0)
                    {
                        n++;
                        if (n==10)
                        {
                            printf("\n\nInventario lleno!!!\n\n ");
                        }
                    }
                }
            }while (op!=11);
        }
    }

}