#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define SIZE 200

static int LINHA;
struct cadastrar
{

    char nome[SIZE][SIZE];
    char ano [SIZE][SIZE];
    char Situacao[SIZE] [SIZE];
    int checagem[SIZE];
} cad_Filme;

void Menu()
{
    int escolha;
    int i;

    do
    {
        printf("\n01-CADASTRAR UM FILME\n02-LISTAR FILMES\n03-FILMES ALUGADOS\n04-SAIR\n\nESCOLHA: ");
        scanf("%d",&escolha);

        system("cls");

        switch(escolha)
        {
        case 1:
            Cadastrar();
            break;
        case 2:
            listar();
            break;
        case 3:
            Alugados();
            break;
        case 4:
            printf("PROGRAMA FECHADO");
            break;
        default:
            printf("OPCAO INVALIDA");
            fflush(stdin);
            break;
        }

    }
    while(escolha != 04);
}


void Cadastrar()
{

    int i,escolha,esc;
    char *validacao;
    validacao = &cad_Filme.Situacao[i];
    do
    {
        printf("Digite o nome do filme:\n");
        fflush(stdin);
        fgets(cad_Filme.nome[LINHA],SIZE,stdin);
        printf("\nDigite o ano do filme:\n");
        fflush(stdin);
        fgets(cad_Filme.ano[LINHA],SIZE,stdin);
        printf("\nFilme alugado ? 1- SIM 2- NAO\n");
        fflush(stdin);
        scanf("%d",&esc);
        if(esc == 1)
        {
            strcpy(cad_Filme.Situacao[LINHA],"SIM");
            cad_Filme.checagem[LINHA] = 1;
        }
        if(esc == 2)
        {
            strcpy(cad_Filme.Situacao[LINHA],"NAO");
        }
        printf("\nDeseja cadastrar mais um ? Digite 1 Para continuar 2 - Para Sair\n");
        scanf("%d",&escolha);

        LINHA++;
    }
    while(escolha !=2);
}
//Funcao listar filmes
void listar()
{
    int i;
    char *validacao;

    validacao = &cad_Filme.nome[i];
    for(i=0; i<LINHA; i++)
    {
        if(validacao != NULL)
        {
            printf("\nCODIGO: %d\nNOME: %sANO: %sSITUACAO: %s\n\n%d",i,cad_Filme.nome[i],cad_Filme.ano[i],cad_Filme.Situacao[i]);

        }
    }
}
//Funcao listar filmes alugados

void Alugados()
{
    int i;
    int *validacao;


    for(i=0; i<LINHA; i++)
    {
        if(cad_Filme.checagem[i] == 1)
        {
            printf("\nCODIGO: %d\nNOME: %sANO: %sSITUACAO: %s\n\n%d",i,cad_Filme.nome[i],cad_Filme.ano[i],cad_Filme.Situacao[i]);
        }
        if(validacao == 0)
        {
            printf("ERRO!");
        }
    }
}

//MAIN

void main()
{
    int i;
    //Setando valor de NULL para vetor nome
    for(i=0; i<SIZE; i++)
    {
        strcpy(cad_Filme.nome[i],"NULL");
        strcpy(cad_Filme.Situacao[i],"NULL");
        cad_Filme.checagem[i] = 0;
    }
    Menu();
}
