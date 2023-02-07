#include <stdio.h>

void selection_sort(int vet[], int tam)
{
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(vet[i] > vet[j])
            {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
}
int main()
{
    int vet[6],aux;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",vet[i]);
    }

    return 0;
}
