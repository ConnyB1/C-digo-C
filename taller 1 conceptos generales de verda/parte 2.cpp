#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_random, adi, check, i=0;
    fflush(stdin);
    num_random= rand() %101 + 1;
    printf("adivina el número");
    while(adi!=num_random)
    {
        i=0;
        scanf("%d",&adi);
        check=adi;
        if(check>num_random)
        {
            for(check;check=adi;check--)
            {
                i=i+1;
            }
            if (i>15)
            {
                printf("Muy lejos");
            }
            else
            {
                printf("estas cerca");
            }   
        }
        else
        {
            for(check;check=adi;check++)
            {
                i=i+1;
            }
            if (i>15)
            {
                printf("Muy lejos");
            }
            else
            {
                printf("estas cerca");
            }   
        }
    }
    if(adi=num_random)
    {
        printf("ganaste");
    }
}