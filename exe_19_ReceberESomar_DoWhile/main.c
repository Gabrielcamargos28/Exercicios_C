#include <stdio.h>
#include <stdlib.h>

void main()
{
    float n,soma;
    do{
        printf("Digite um numero, se quiser ver o resultado dos digitados digite '0':");
        scanf("%f",&n);
        soma = soma + n;
    }while(n != 0);
    printf("Resultado:%0.2f",soma);
}
