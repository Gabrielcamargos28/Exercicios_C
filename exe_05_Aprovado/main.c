#include <stdio.h>
#include <stdlib.h>

void main()
{
    float n01,n02,nFinal,frequencia;

    printf("Digite a primeira nota e sugunda nota:");
    scanf("%f%f", &n01,&n02);
    printf("Digite a frequencia:");
    scanf("%f",&frequencia);
    nFinal = n01 + n02;
    if(nFinal >= 60 && frequencia >= 70){
        printf("Aluno aprovado");
    }
    else{
        printf("Aluno reprovado");
    }

}

