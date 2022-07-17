#include <stdio.h>
#include <stdlib.h>

void main()
{
    float horas,d01,d02,d03,d04 ,d05,totalSemana;

    horas = 30;

    printf("Digite o total de horas trabalhadas no dia 01:");
    scanf("%f", &d01);

    printf("Digite o total de horas trabalhadas dia no 02:");
    scanf("%f", &d02);

    printf("Digite o total de horas trabalhadas no dia 03:");
    scanf("%f", &d03);

    printf("Digite o total de horas trabalhadas no dia 04:");
    scanf("%f", &d04);

    printf("Digite o tolal de horas trabalhadas no dia 05:");
    scanf("%f", &d05);

    d01 = d01 * horas;
    d02 = d02 * horas;
    d03 = d03 * horas;
    d04 = d04 * horas;
    d05 = d05 * horas;
    totalSemana = d01 + d02 + d03 + d04 + d05;
    printf("Resultado de ganhos por dia: \nDia 01: R$%0.2f \nDia 02: R$%0.2f \nDia 03: R$%0.2f \nDia 04: R$%0.2f \nDia 05: R$%0.2f\n", d01,d02,d03,d04,d05);
    printf("\nValor total recebido: \nR$%0.2f\n", totalSemana);
    system("pause");
    return 0;

}
