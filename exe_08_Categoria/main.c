#include <stdio.h>
#include <stdlib.h>

 void main()
{
    int idade;

    printf("Digite a idade do piloto:");
    scanf("%d", &idade);

    if(idade >= 7 && idade <= 10){
        printf("Categoria: 'INFANTIL'\n");
    }
    if(idade >= 11 && idade <= 15){
        printf("Categoria 'JUVENIL'\n");
    }
    if(idade >= 16 && idade <= 20){
        printf("Categoria: 'JUNIOR'\n");
    }
    if(idade >= 21){
        printf("Categoria: 'ADULTO'\n");
    }
    else{
        printf("PILOTO NAO TEM IDADE PARA NENHUMA CATEGORIA");
    }

    return 0;
}
