#include <stdio.h>
#include <stdlib.h>

void main()
{
    int c,membros;
    float salario,salarioFamilia;

    printf("Digite a quantidade de menbros:\n");
    scanf("%d",&membros);
    c = 0;
    while(c < membros){
            printf("Digite o salario do membro:\n");
            scanf("%f",&salario);
            c = c + 1;
            salarioFamilia = salarioFamilia + salario;
    }
    printf("Salario final da familia: %0.2f",salarioFamilia);

    return 0;
}
