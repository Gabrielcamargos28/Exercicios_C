#include <stdio.h>
#include <stdlib.h>

void main()
{
    //char test[50] [50];
    char test[3] [5];
    int i,entradas;

    printf("Quantas entradas vao ser feitas:");
    scanf("%d",&entradas);
    for(i=0;i<entradas;i++){
            printf("Digite:");
            scanf("%s",&test[i]);
    }
    for(i=0;i<entradas;i++){
        printf("%s ",test[i]);
    }

}
