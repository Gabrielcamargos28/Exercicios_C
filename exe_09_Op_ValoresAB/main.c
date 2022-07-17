#include <stdio.h>
#include <stdlib.h>

void main()
{
   int a,b,op;

   printf("Digite dois valores:\n");
   scanf("%d%d",&a,&b);

   if(a == b){
    op = a + b;
    printf("Soma de a e b: %d\n",op);
   }
   if(a < b){
   op = b - a;
   printf("Subtracao de b e a:%d\n",op);
   }
   if(b < a){
    op = a * b;
    printf("Multiplicacao de a e b:%d\n",op);
   }
   system("pause");
   return 0;

}
