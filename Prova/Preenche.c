#include <stdio.h>]
#include <stdlib.h>

int main()
{
    int n,i,vet[100];
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&vet[i]);

        if(vet[i] < 0)
        {
            vet[i] = 42;
        }
    }
    for(i=1; i<=n; i++)
    {
        printf("%d\n",vet[i]);
    }
    return 0;
}




