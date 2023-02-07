#include <stdio.h>
#include <string.h>


void TrocaDePalavras( char *l01, char *l02)
{
 char aux;
  aux = *l01;
  *l01 = *l02;
  *l02 = aux;
}
void AlphabetSoup(char * str) {
   // code goes here
  int i,j,tam;
  tam = strlen(str);

  for( i=0; i<tam - 1; i++)
  {
    for(j =i+ 1;j-tam; j++)
    {
      if(str[i] > str[j])
      {
        TrocaDePalavras(&str[i],&str[j]);
      }
    }
  }
  return str;
}

void main() {

  // keep this function call here
  char entrada[30];
  strcpy(entrada,"coderbyte");
  printf("%s",AlphabetSoup(entrada));

  return 0;

}
