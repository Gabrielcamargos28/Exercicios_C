#include <stdio.h>
#include <stdlib.h>


void main()
{
    Cabecario();
    Menu();


}
void Cabecario()
{
    printf("\n**************************************\n");
    printf("\n*          TESTE OPERACOES           *\n");
    printf("\n**************************************\n");

}
void Menu()
{

    int escolha;
    do
    {

        printf("\n1 - Multiplicacao\n");
        printf("\n2 - Divisao\n");
        printf("\n3 - Soma\n");
        printf("\n4 - Subtracao\n");
        printf("\n5 - Sair\n");
        printf("\nDIGITE SUA ESCOLHA\n");
        scanf("%d",&escolha);

        system("cls");

        switch(escolha)
        {
        case 1:
            Multiplicacao();
            break;
        case 2:
            Divisao();
            break;
        case 3:
            Soma();
            break;
        case 4:
            Subtracao();
            break;

        }

    }
    while(escolha != 5);
}
void Multiplicacao()
{
    float n01,n02,mult;

    printf("\nDigite dois numeros para serem multiplicados:\n");
    scanf("%f %f",&n01,&n02);

    mult = n01 * n02;

    printf("Resultado: %0.2f * %0.2f = %0.2f",n01,n02,mult);
}
void Divisao()
{
    float n01,n02,div;

    printf("\nDigite dois numeros para serem divisao:\n");
    scanf("%f %f",&n01,&n02);

    div = n01 / n02;

    printf("\nResultado: %0.2f / %0.2f = %0.2f\n",n01,n02,div);
}
void Soma()
{
    float n01,n02,soma;

    printf("\nDigite dois numeros para serem somados:\n");
    scanf("%f %f",&n01,&n02);

    soma = n01 + n02;

    printf("\nResultado: %0.2f + %0.2f = %0.2f",n01,n02,soma);

}
void Subtracao()
{
    float n01,n02,sub;

    printf("\nDigite dois numeros para serem subtraidos:\n");
    scanf("%f %f",&n01,&n02);

    sub = n01 - n02;

    printf("\nResultado: %0.2f - %0.2f = %0.2f",n01,n02,sub);

}
