#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i,n,maior,menor;

    for(i=0;i<10;i++){
    printf("Digite um numero:");
    scanf("%d",&n);
    if(i==0){
        maior = n;
        menor = n;
    }if(n<menor){
        menor = n;
    }if(n>maior){
        maior = n;
    }
    }
    printf("\nMaior:%d\n \nMenor:%d\n",maior,menor);

    system("pause");
    return 0;

}
