#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, soma;

    printf("Digite um numero:");
    scanf("%d", &a);
    printf("Digite um numero:");
    scanf("%d", &b);
    printf("Digite um para multiplicar na soma:");
    scanf("%d", &c);

    soma = (a + b) * c;

    printf("Resultado: %d", soma);

    return 0;
}
