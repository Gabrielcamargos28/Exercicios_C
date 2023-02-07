#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

char nome [SIZE][50];
char email [SIZE][50];
char cpf [SIZE];

void Cadastro();
void Pesquisar();
void Menu();
void Lista();


void main()
{
    Menu();

    return 0;

}

void Menu()
{
    int escolha;
    do
    {
        printf("\n******************************\n");
        printf("\n*     PROGRAMA CADASTRO      *\n");
        printf("\n******************************\n");
        printf("\n1 - Cadastrar Cliente\n");
        printf("\n2 - Consultar Cliente\n");
        printf("\n3 - Listar Clientes\n");
        printf("\n4 - Sair\n");
        printf("\nESCOLHA: ");
        scanf("%d",&escolha);

        system("cls");

        switch(escolha)
        {
        case 1:
            Cadastro();
            break;
        case 2:
            Pesquisar();
            break;
        case 3:
            Lista();
            break;
        default:
            break;

        }
    }
    while(escolha != 4);


    printf("Fim programa");
    return 0;

}

void Cadastro()
{
    static int LINHA;
    int escolha;
    do
    {
        printf("\nDigite o nome:\n");
        scanf("%s",&nome[LINHA]);
        printf("\nDigite o email:\n");
        scanf("%s",&email[LINHA]);
        printf("\nDigite o cpf:\n");
        scanf("%d",&cpf[LINHA]);
        printf("\nPARA REALIZAR UM NOVO CADASTRO DIGITE '1' PARA SAIR DIGITE QUALQUER VALOR\nESCOLHA: ");
        scanf("%d",&escolha);
        LINHA++;

    }
    while(escolha==1);
}

void Pesquisar()
{
    int i,escolha,pesqCpf;
    char pesqNome[SIZE];
    do
    {
        printf("Escolha um meio de pesquisa\n1 - Cpf\n2 - Nome\n 0 - Sair\n");
        scanf("%d",&escolha);
        switch(escolha)
        {
        case 1:
            printf("\nDigite o cpf:\n");
            scanf("%d",&pesqCpf);
            for(i=0; i<SIZE; i++)
            {
                if(cpf[i]==pesqCpf)
                {
                    printf("\nNome: %s\nEmail: %s\nCpf: %d",nome[i],email[i],cpf[i]);
                }
            }
            break;

        case 2:
            printf("Digite o nome para pesquisa");
            scanf("%s",&pesqNome);
            for(i=0; i<SIZE; i++)
            {
                if(strcmp(nome[i],pesqNome)==0)
                {
                    printf("\nNome: %s\nEmail: %s\n\nCpf: %d",nome[i],email[i],cpf[i]);
                }
            }


        }
        printf("DIGITE 0 PARA SAIR");
    }
    while(escolha !=0);
}

void Lista()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        if(cpf[i]>0){
        printf("\nLISTA DE CLIENTES:\n");
        printf("Codigo do Cliente: %d\n\nNOMES: %s\nEmail: %s\nCpf: %d\n",i,nome[i],email[i],cpf[i]);
        }
    }
}

