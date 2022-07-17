#include <stdio.h>
#include <stdlib.h>

void main()
{
    float vet[10];
    int i;


    for(i=0;i<10;i++){
        printf("Digite um valor para o vetor:");
        scanf("%f",vet[i]);
    }
    for(i=0;i<10;i++){
        printf("%0.2f",vet[i]);
    }
}
