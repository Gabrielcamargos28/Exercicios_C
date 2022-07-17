#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,maior;

    printf("Digite tres valores:\n");
    scanf("%d%d%d",&a,&b,&c);

    maior = a;

    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    printf("O\tmaior\te:%d",maior);

    return 0;
}
