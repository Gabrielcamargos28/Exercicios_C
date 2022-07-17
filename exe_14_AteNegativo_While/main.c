#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    while(n > 0){
        printf("Digite um numero:\n");
            scanf("%d",&n);
        if(n > 0){
            n = n*2;
            printf("DOBRO:%d\n",n);
        }
        if(n < 0){
            printf("FIM DO PROGRAMA");
        }
    }
    return 0;
}
