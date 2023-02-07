#include <stdio.h>
#include <string.h>
int main(){

    char nome[50];
    //scanf("%s",nome);

    //printf("%s\n");

    //Imprimir so uma

    //printf("%c",nome[0]);


    //Habilitar leitura ate digitar oq eu quiser
    //[^ate que eu digite]
    //[eu não aceito isso]
    //cplus-plus

    scanf("%[^\n]c",nome);

    printf("%s",nome);

    //


    return 0;




}
