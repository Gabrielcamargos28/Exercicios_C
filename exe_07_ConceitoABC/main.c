#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nFinal;

    printf("Digite a nota final:");
    scanf("%f", &nFinal);

    if(nFinal < 60){
        printf("REPROVADO !!! ");
    }
    if(nFinal >= 60 && nFinal <74.99){
        printf("Conceito 'C' ");
    }
    if(nFinal >= 75 && nFinal < 89.99){
        printf("Conceito 'B' ");
    }
    if(nFinal > 90){
        printf("Conceito 'A' ");
    }

    printf("\nFIM DO PROGRAMA");
    return 0;
}
