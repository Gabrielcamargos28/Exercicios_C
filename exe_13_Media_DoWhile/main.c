#include <stdio.h>
#include <stdlib.h>

void main()
{
    float n01,n02,media;
    int escolha;

    do{
        printf("Digite as nota:");
        scanf("%f%f",&n01,&n02);
        media = (n01 + n02) /2;
        printf("Media: %f",media);
        printf("\nDeseja somar outra media ?\n 01-Sim\n 02-Nao\n");
        scanf("%d",&escolha);
    }
    while(escolha == 1);

    return 0;

}
