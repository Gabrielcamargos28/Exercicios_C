#include <stdio.h>
#include <math.h>

int main(){

    int restoN,restoM,x,y,cem,cinquenta,vinte,dez,cinco,dois,um;


    scanf("%d",&x);

    restoN = x;
    restoM = y;

    printf("NOTAS:\n");

    cem = x / 100;

    restoN = restoN % 100;

    printf("%d notas(s) de R$ 100.00\n",cem);

    cinquenta = restoN / 50;

    restoN = restoN % 50;

    printf("%d notas(s) de R$ 50.00\n",cinquenta);

    vinte = restoN / 20;

    restoN = restoN % 20;

    printf("%d notas(s) de R$ 20.00\n",vinte);

    dez = restoN / 10;

    restoN = restoN % 10;

    printf("%d notas(s) de R$ 10.00\n",dez);

    cinco = restoN / 5;

    restoN = restoN % 5;

    printf("%d notas(s) de R$ 5.00\n",cinco);

    dois = restoN / 2;

    restoN = restoN % 2;

    printf("%d notas(s) de R$ 2.00\n",dois);

    printf("MOEDAS:\n");

    restoM = restoN + y;

    um = restoM / 1;

    restoM = restoM % 1;

    printf("%d moeda(s) de R$ 1.00",um);

    Mcinquenta = restoM / 0.50;

    restoM = restoM % 0.50;







}
