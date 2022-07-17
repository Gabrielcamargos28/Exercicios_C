#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,maior,menor,i;

    i = 0;
    do{
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
    }while(i<10);
    printf("\nMaior:%d\nMenor:%d\n",maior,menor);

    system("pause");
    return 0;
}

