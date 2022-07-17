#include <stdio.h>
#include <stdlib.h>

void main ()
{
    float a,b,calculo,resultado;

    printf("Digite dois valores:\n");
    scanf("%f%f",&a,&b);
    calculo = a * b;

    if(calculo > 50){
            resultado = calculo / 2;
            printf("Metade:%0.2f", resultado);
    }else{
        resultado = calculo *2;
        printf("Dobro:%0.2f", resultado);
    }
    return 0;
}

