#include <stdio.h>
#include <stdlib.h>

void main()
{
    float comprimento, largura, soma;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);
    soma = comprimento * largura;
    printf("\nA area do quadrado e: %f m2\n", soma);

    system("pause");
    return 0;
}
