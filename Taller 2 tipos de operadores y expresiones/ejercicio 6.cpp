#include <stdio.h>

int main()
{
     int num, num2, bit;
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
}