#include <stdio.h>

int main()
{

    double a,b,r;
    char op;

    scanf("%lf%c%lf",&a,&op,&b);

    switch(op)
    {
    case '+':
        r = a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '*':
        r = a * b;
        break;
    case '/':
        r = a / b;
        break;
    default:
        break;

    }

    printf("%.2lf %c %.2lf = %.2lf",a,op,b,r);

    return;




}
