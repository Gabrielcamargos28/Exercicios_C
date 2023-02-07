#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    char opcao[100];
    int i;

    do{
        scanf("%s",opcao);
        for(i=0;i<strlen(opcao);i++){
            opcao[i] = tolower(opcao[i]);
        }


    }while(strcmp(opcao,"sim")==0 || (strcmp(opcao,"Sim")==0));
    return 0;
}
