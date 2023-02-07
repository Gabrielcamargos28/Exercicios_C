#include <stdio.h>]
#include <stdlib.h>

int main()
{
    int idadeN,n,cont=,idade[100],i,posicao;

    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        scanf("%d",&idade[i]);
        if(idade[i] > 65){
            cont++;
        }
    }
        scanf("%d",&idadeN);
        if((idadeN >= 65)){
        printf("%d",cont);
        }
    return 0;
}




