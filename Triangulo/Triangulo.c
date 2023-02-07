#include <stdio.h>

int main()
{
    double A,B,C,Area,perimetroTri;

    scanf("%lf %lf %lf",&A,&B,&C);

    if((A< B + C) && (B < A + C) && (C < A + B)){
        perimetroTri = A + B + C;
        printf("Perimetro = %.1lf\n",perimetroTri);
    }
    else{
        Area = (A+B) * C / 2;
        printf("Area = %.1lf\n",Area);
    }

    return 0;
}

