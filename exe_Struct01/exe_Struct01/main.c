#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct cad_Anulo
{
    char matricula[20];
    char nome[10];
    double mensalidade;
    char telefone[20];
}cadAluno;



int main()
{
    printf("Digite o numero de matricula:\n");
    fflush(stdin);
    fgets(cadAluno.matricula,30,stdin);

    printf("Digite o nome:\n");
    fflush(stdin);
    fgets(cadAluno.nome,10,stdin);

    printf("Digite o mensalidade:\n");
    scanf("%lf",&cadAluno.mensalidade);

    printf("Digite o telefone:\n");
    fflush(stdin);
    fgets(cadAluno.telefone,20,stdin);


    printf("\nCADASTRO FEITO <-> CONFIRA!\n");
    printf("%s",cadAluno.matricula);
    printf("%s",cadAluno.nome);
    printf("%0.2lf",cadAluno.mensalidade);
    printf("\n%s",cadAluno.telefone);


    return 0;
}
