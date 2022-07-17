#include <stdio.h>
#include <stdlib.h>

void main()
{
    float salario, nsalario, soma;

    printf("Digite o salario:");
    scanf("%f",&salario);
    nsalario = salario * 0.10;
    soma = salario + nsalario;
    printf("\nNovo salario com reajuste: %f\n", soma);

}
