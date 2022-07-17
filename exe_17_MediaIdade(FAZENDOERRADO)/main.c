#include <stdio.h>
#include <stdlib.h>

void main(){
    int c,idadeD,media,idade;
    c = 0;

    while(idade >= 0){
        c = c + 1;
        idadeD = idadeD + idade;
         media = idadeD / c;
        printf("Digite a idade:");
        scanf("%d",&idade);

    }
    printf("Media de idade digitadas: %d\n",media);
    system("\npause");
    return 0;
}
