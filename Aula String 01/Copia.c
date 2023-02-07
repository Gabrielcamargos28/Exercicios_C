#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    char teste2[20], teste[20]={"Texte Inicial"};
    int i;
    strcpy(teste2, teste);

    printf("%s\n",teste2);


    return 0;
}
