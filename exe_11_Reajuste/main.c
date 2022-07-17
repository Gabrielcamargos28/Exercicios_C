#include <stdio.h>
#include <stdlib.h>

void main()
{
    float salario,aumento;

    printf("Digite o salario:");
    scanf("%f",&salario);

    if(salario < 500){
        aumento = salario * 0.15;
        salario = salario + aumento;
        printf("Salario com aumento de 15 porcento:%f",salario);
    }
    if(salario >= 500 && salario <= 1000){
        aumento = salario * 0.10;
        salario = salario + aumento;
        printf("Salario com aumento de 10 porcento:%0.2f",salario);

    }
    if(salario > 1000){
        aumento = salario * 0.05;
        salario = salario + aumento;
        printf("Salario com aumento de 5 porcento:%0.2f",salario);
    }

    return 0;
}
