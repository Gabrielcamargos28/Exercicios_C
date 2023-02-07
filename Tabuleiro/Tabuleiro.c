#include <stdio.h>

int main()
{
    int L,C;

    scanf("%d\n%d",&L,&C);

    if((L % 2 != C % 2))
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }




    return 0;
}
