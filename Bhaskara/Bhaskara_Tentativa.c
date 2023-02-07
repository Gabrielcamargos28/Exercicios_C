#include <stdio.h>
#include <math.h>

int main (){
    double bask1,bask2,delta,a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    delta = sqrt((b * b) - (4 * a * c));
    bask1 = ((-b + delta) / (2 * a));
    bask2 - ((-b - delta) / (2 * a));

    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %5.lf\nR2 = %5lf\n",bask1,bask2);

    }
    return 0;
}
