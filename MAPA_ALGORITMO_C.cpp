// Mapa de Agoritimos e lógica de programação C em Engenharia de Software na UNICESUMAR
// criar um programa em linguagem C para cadastro de livros e revistas em caixas separadas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

struct livros
{
    char nome_livro [70];
    char nome_autorl [60];
    char editoral [40];
    long long int   isbnl ;
    int edicaol ;
    int anol ;
    int quantidadel ;
};

struct revistas
{
    char nome_revista [70];
    char nome_autor [60];
    char editora [40];
    long long int isbn ;
    int edicao ;
    int ano ;
    int quantidade ;
};

struct livros caixa_liv [10] [50];
struct revistas caixa_rev [10] [50];

int j=0,cx_l=0,cx_r=0,cont_l=0,cont_3l=0,cont_2l=0,cont_r=0,cont_2r=0,cont_3r=0,i=0,op=0,op2=0,op3=0,op4=0,op5=0,op6=0,j2;

void menu() {
    printf("\n  ** ENGENHARIA DE SOFTWARE ************ \n  ** ALUNO: Maikon Elvis Vieira De Aguiar ********");
    printf(" \n  ** RA: 20074403-5 ****************");
    printf("\n\n\n\n\n\n\t  _________ PLANILHA LIVROS & REVISTAS _________ ");
    printf("\n\n\n\n\n\t     * MENU DE OPÇÕES *");
    printf("\n\n\n   DIGITE: \n\n\t [1]-Para cadastrar um novo livro ou revista ");
    printf("\n\n\t [2]-Para visualizar todos os livros cadastrados ");
    printf("\n\n\t [3]-Para visualizar todas as revistas cadastradas ");
    printf("\n\n\t [4]-Para pesquisar por caixa ");
    printf("\n\n\t [0]-Para SAIR  \n\n\t ");
    scanf("%d",&op);
    system("cls");
}

void cadastrar_livro() {
    printf("\n\n\t\t\t      __CADASTRAMENTO DE ITEM__\n");
    printf("\n\n\t Informe o TITULO do livro:.............. ");
    fflush(stdin);
    gets(caixa_liv[cx_l][j].nome_livro);
    printf("\n\n\t Informe o AUTOR do livro:............... ");
    fflush(stdin);
    gets(caixa_liv[cx_l][j].nome_autorl);
    printf("\n\n\t Informe o Nº de EDIÇÃO do livro:........ ");
    scanf("%d", &caixa_liv[cx_l][j].edicaol);
    printf("\n\n\t Informe a EDITORA do livro:............. ");
    fflush(stdin);
    gets(caixa_liv[cx_l][j].editoral);
    printf("\n\n\t Informe o Nº do ISBN do livro:.......... ");
    scanf("%lli", &caixa_liv[cx_l][j].isbnl);
    printf("\n\n\t Informe o ANO do livro:................. ");
    scanf("%d", &caixa_liv[cx_l][j].anol);
    printf("\n\n\t Informe a quantidade de livros:......... ");
    scanf("%d", &caixa_liv[cx_l][j].quantidadel);
    printf("\n\n\n\n\t ..........Cadastro concluido..........\n\n");
}

void cadastrar_revista() {
    printf("\n\n\n\t\t\t      __CADASTRAMENTO DE ITEM__\n");
    printf("\n\n\t Informe o TITULO da revista:.............. ");
    fflush(stdin);
    gets(caixa_rev[cx_r][j2].nome_revista);
    printf("\n\n\t Informe o AUTOR da revista:............... ");
    fflush(stdin);
    gets(caixa_rev[cx_r][j2].nome_autor);
    printf("\n\n\t Informe o Nº de EDIÇÃO da revista:........ ");
    scanf("%d", &caixa_rev[cx_r][j2].edicao);
    printf("\n\n\t Informe a EDITORA da revista:............. ");
    fflush(stdin);
    gets(caixa_rev[cx_r][j2].editora);
    printf("\n\n\t Informe o Nº do ISBN da revista:.......... ");
    scanf("%d", &caixa_rev[cx_r][j2].isbn);
    printf("\n\n\t Informe o ANO da revista:................. ");
    scanf("%d", &caixa_rev[cx_r][j2].ano);
    printf("\n\n\t Informe a quantidade de revistas:......... ");
    scanf("%d", &caixa_rev[cx_r][j2].quantidade);
    printf("\n\n\n\n\t ..........Cadastro concluido..........\n\n");

}

void lista_livros() {
    for (i=0; i<j; i++) {
        printf("\n\n\t LIVRO:..............  %s",caixa_liv[cx_l][i].nome_livro);
        printf("\n\n\t AUTOR:..............  %s",caixa_liv[cx_l][i].nome_autorl);
        printf("\n\n\t EDIÇÃO:.............  %d",caixa_liv[cx_l][i].edicaol);
        printf("\n\n\t EDITORA:............  %s",caixa_liv[cx_l][i].editoral);
        printf("\n\n\t ISBN:...............  %d",caixa_liv[cx_l][i].isbnl);
        printf("\n\n\t ANO:................  %d",caixa_liv[cx_l][i].anol);
        printf("\n\n\t QUANTIDADE:.........  %d",caixa_liv[cx_l][i].quantidadel);
        printf("\n\n\t CÓDIGO DE REGISTRO..  liv-%d",i);
        printf("\n\n\n\n ........................................................\n\n");
    }
}

void lista_revistas() {
    for (i=0; i<j2; i++) {
        printf("\n\n\t REVISTA:............  %s",caixa_rev[cx_r][i].nome_revista);
        printf("\n\n\t AUTOR:..............  %s",caixa_rev[cx_r][i].nome_autor);
        printf("\n\n\t EDIÃ‡ÃƒO:.............  %d",caixa_rev[cx_r][i].edicao);
        printf("\n\n\t EDITORA:............  %s",caixa_rev[cx_r][i].editora);
        printf("\n\n\t ISBN:...............  %d",caixa_rev[cx_r][i].isbn);
        printf("\n\n\t ANO:................  %d",caixa_rev[cx_r][i].ano);
        printf("\n\n\t QUANTIDADE:.........  %d",caixa_rev[cx_r][i].quantidade);
        printf("\n\n\t CÃ“DIGO DE REGISTRO..  cx1R-%d",i);
        printf("\n\n\n\n ........................................................\n\n");
    }
}

int main()
{
    system ("MODE con cols=98");
    setlocale (LC_ALL,"portuguese");

    do {
        menu();

        if (op==1) {

            printf("\n\n\n\t\t\t      __CADASTRAMENTO DE ITEM__");

            printf("\n\n\n   DIGITE: \n\n\t [1]-Para cadastrar um novo LIVRO \n\n\t [2]-Para cadastrar uma nova REVISTA  \n\n\t");
            scanf("%d",&op2);
            system("cls");

            if (op2==1) {
                printf("\n\n\n\t\t\t      __CADASTRAMENTO DE ITEM__");
                printf("\n\n   Em qual das caixas o item sera armazenado?: \n\n\t [1]- Para caixa Nº 1 \n\n\t [2]- Para caixa Nº 2 \n\n\t [3]- Para caixa Nº 3 \n\n\t");
                scanf("%d",&op3);
                system("cls");

                switch(op3) {
                case 1:

                    cx_l =0;

                    j =    cont_l++;

                    printf("\n\n\n      CAIXA 1 ");
                    cadastrar_livro();

                    getch();
                    system("cls");
                    menu();
                    break;

                case 2:

                    j = cont_2l++;
                    cx_l =1;

                    printf("\n\n\n      CAIXA 2 ");
                    cadastrar_livro();

                    getch();
                    system("cls");
                    menu();
                    break;

                case 3:

                    j = cont_3l++;
                    cx_l = 2;
                    printf("\n\n\n      CAIXA 3 ");
                    cadastrar_livro();

                    getch();
                    system("cls");
                    menu();
                    break;
                }

            }

            if (op2==2) {
                printf("\n\n\n\t\t\t      __CADASTRAMENTO DE ITEM__");
                printf("\n\n   Em qual das caixas o item sera armazenado?: \n\n\t [1]- Para caixa Nº 1 \n\n\t [2]- Para caixa Nº 2 \n\n\t [3]- Para caixa Nº 3 \n\n\t");
                scanf("%d",&op3);
                system("cls");

                switch(op3) {
                case 1:
                    j2=cont_r++;
                    cx_r = 0;
                    printf("\n\n\n      CAIXA 1 ");
                    cadastrar_revista();
                    getch();
                    system("cls");
                    menu();
                    break;

                case 2:
                    j2=cont_2r++;
                    cx_r = 1;
                    printf("\n\n\n      CAIXA 2 ");
                    cadastrar_revista();
                    getch();
                    system("cls");
                    menu();
                    break;

                case 3:
                    j2=cont_3r++;
                    cx_r = 2;
                    printf("\n\n\n      CAIXA 3 ");
                    cadastrar_revista();
                    getch();
                    system("cls");
                    menu();
                    break;

                }
            }
        }

        if (op==2) {
            if (cont_l!=0 || cont_2l!=0 || cont_3l!=0 ) {
                printf("\n\n\n\t\t\t     __ LISTA DE LIVROS CADASTRADOS __\n\n\n\n");

                if (cont_l!=0) {
                    cx_l =0;
                    j = cont_l;
                    lista_livros();
                }

                if (cont_2l!=0) {
                    cx_l =1;
                    j = cont_2l;
                    lista_livros();
                }

                if (cont_3l!=0) {
                    cx_l =2;
                    j = cont_3l;
                    lista_livros();
                }

            }

            else {
                printf("\n\n*** Nenhum Livro Cadastrado!!");
            }

            getch();
            system("cls");
            menu();
        }

        if (op==3) {
            if (cont_r!=0 || cont_2r!=0 || cont_3r!=0 ) {
                printf("\n\n\n\t\t\t     __ LISTA DE REVISTAS CADASTRADOS __\n\n\n\n");

                if (cont_r!=0) {
                    cx_r =0;
                    j2 = cont_r;
                    lista_revistas();
                }

                if (cont_2r!=0) {
                    cx_r =1;
                    j2 = cont_2r;
                    lista_revistas();
                }
                if (cont_3r!=0) {
                    cx_r =2;
                    j2 = cont_3r;
                    lista_revistas();
                }

            }
            else {
                printf("\n\n*** Nenhuma Revista Cadastrada!!");
            }

            getch();
            system("cls");
            menu();
        }

        if (op==4) {
            printf("\n\n\n\t\t\t     __ PESQUISA POR CAIXA __\n");
            printf("\n\n\n   Informe o número da CAIXA: \n\n\t [1]-Para CAIXA 1 \n\n\t [2]-Para CAIXA 2  \n\n\t [3]-Para CAIXA 3 \n\n\t ");
            scanf("%d",&op5);
            system("cls");

            switch (op5) {

            case 1:
                cx_l = 0;
                cx_r =0;
                j = cont_l;
                j2 = cont_r;
                printf("\n\n\t CAIXA 1");

                lista_livros();
                lista_revistas();

                break;

            case 2:
                cx_l = 1;
                cx_r =1;
                j = cont_2l;
                j2 = cont_2r;
                printf("\n\n\t CAIXA 2");

                lista_livros();
                lista_revistas();

                break;

            case 3:

                cx_l = 2;
                cx_r =2;
                j = cont_3l;
                j2 = cont_3r;
                printf("\n\n\t  CAIXA 3");

                lista_livros();
                lista_revistas();

                break;
            }

            getch();
            system("cls");
            menu();

        }

    }

    while (op!=0);

    return 0;
}
