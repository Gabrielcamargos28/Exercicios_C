#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,nP = 0,nN = 0 ,i;

    for(i=0;i<10;i++){
        printf("Digite o numero:");
        scanf("%d",&n);
        if(n > 0){
            nP++;}
        if(n < 0){
            nN++;}
        }
        printf("\nPositivos: %d\n",nP);
        printf("\nNegativos: %d\n,",nN);
}
