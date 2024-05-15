#include <stdio.h>

int main()
{
    int grados, fare;
    printf("Dame la temperatura en grados celsius y te lo dare en grados fahrenheit: ");
    scanf("%d",&grados);
    fare=(grados * 9/5) + 32;
    printf("La temperatura es: %d", fare);
}