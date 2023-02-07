#include <stdio.h>

int main(){
    double valor,cod;
    int codigo,quantidade;

    scanf("%d %d",&codigo,&quantidade);
    switch(codigo){

        case 1:
            cod = 4.00;
            valor = cod * quantidade;
            printf("Total: R$ %.2lf\n",valor);
            break;
        case 2:
            cod = 4.50;
            valor = cod * quantidade;
            printf("Total: R$ %.2lf\n",valor);
            break;
        case 3:
            cod = 5.00;
            valor = cod * quantidade;
            printf("Total: R$ %.2lf\n",valor);
            break;
        case 4:
            cod = 2.00;
            valor = cod * quantidade;
            printf("Total: R$ %.2lf\n",valor);
            break;
        case 5:
            cod = 1.50;
            valor = cod * quantidade;
            printf("Total: R$ %.2lf\n",valor);
            break;
        default:
            break;

    }
    return 0;

}
