#include <stdio.h>]
#include <stdlib.h>

int main()
{
    int  tamanho,i;

    scanf("%d",&tamanho);

    int menor,n[tamanho];
    menor = n[tamanho];

    for(i=0;i<tamanho;i++){

        scanf("%d",&n[tamanho]);

        if(n[tamanho]<menor){

            menor = n[tamanho];
        }

    }
    printf("%d",menor);


    return 0;
}
