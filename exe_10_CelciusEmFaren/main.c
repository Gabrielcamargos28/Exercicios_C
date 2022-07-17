#include <stdio.h>
#include <stdlib.h>

void main()
{
    float cel,far;

    printf("Digite a temperatura em celcius:");
    scanf("%f",&cel);

    far = ((9*cel)/5)+32;

    printf("Celsius:%0.2f Farenheits: %0.2f",cel,far);
}
