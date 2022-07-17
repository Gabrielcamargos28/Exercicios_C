#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,n,pares;
    int vet[10],vetpar[10];

    for(i=0;i<10;i++){
        printf("\nDigite um numero:\n");
        scanf("%d",&vet[i]);
        if(vet[i] % 2 == 0){
            vetpar[i] = vet[i];
        }
        else{
                vetpar[i] = 0;
        }
    }
    for(i=0;i<10;i++){
    printf("%d ",vetpar[i]);
    }
}
