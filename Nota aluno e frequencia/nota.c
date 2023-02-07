#include <stdio.h>
#include <math.h>


int main()
{
    double nota, percPresencas;
    int qtdPresencas, qtdAulas;

    scanf("%lf %d %d", &nota, &qtdPresencas, &qtdAulas);

    percPresencas = ((double) qtdPresencas) / ((double) qtdAulas);


    if(nota >= 6 && percPresencas >= 0.75)
    {

        printf("Aluno aprovado\n");
    }
    else if(nota < 60 &&  percPresencas < 0.75)
    {

        printf("Reprovado por presencas\n");
    }
    else if(nota < 60){
        printf("Reprovado por nota\n");

    }
    else {
    printf("Reprovado por frequencia");
    }
    return 0;

}
