#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,n,maior,menor;
    i=0;
    while(i<10){
        printf("Digite um numero:");
        scanf("%d",&n);
        if(i==0){
            maior = n;
            menor = n;
        }
        if(n>maior){
            maior = n;
        }
        if(n<menor){
            menor = n;
        }
    i++;
    }
    printf("\nMaior: %d\nMenor: %d\n",maior,menor);
}








