#include <stdio.h>

void selection_sort(int vetor[],int max)
{
    int i,j,min,aux;
    for(i=0; i < (max); i++)
    {
        /*O minimo � o primeiro numero n�o ordenado ainda*/
        min = i;
        for(j= i+1; j < max; j++)
        {
            /*Caso tenha algum numero menor ele faz a troca do minimo*/
            if(vetor[j] < vetor[min])
            {
                min = j;
            }
        }
        /*Se o minimo for diferente do primeiro numero n�o ordenado ele faz a troca para ordenalos*/
        if(i != min)
        {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
    /*Imprime o vetor ordenado*/
    for(i=0; i<max; i++)
    {
        printf("%d ",vetor[i]);
    }
}
int main(){
    int max,i;
    /*Le os algarismos do vetor*/
    scanf("%d",&max);
    int vetor[max];
    for(i=0;i<max;i++){
        scanf("%d",&vetor[i]);
    }
    selection_sort(vetor,max);
}
