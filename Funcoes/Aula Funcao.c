#include <stdio.h>

/*
tipo nome(parametros){
    codigo
    return
}


    void nao retorna nada

*/

double delta(double a, double b, double c){

    double delta = (b*b) - (4 * a* c);

    return delta;
}

void imprimir(int n){
    for(int i=1;i<n;i++){
        printf("%d\n",i);
    }
}
int main(){
    imprimir(10);

    double a,b,c;
    printf( "%lf",delta(1,2,3));
    //printf("%lf %lf %lf %lf",(a,b,c));
    return 0;
}
