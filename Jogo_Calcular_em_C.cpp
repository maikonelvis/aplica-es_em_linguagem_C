#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<locale.h>


int nivel,op,i,n1,n2,result,resp,pontos;
char operacao;

void menu() {
    printf("\n\t************************");
	printf("\n\t*** JOGO DE CÁLCULOS ***");
    printf("\n\t************************");
    printf("\n (Última pontuação %d)",pontos);
    printf("\n\n Digite o nível: \n [1] Fácil \n [2] Médio \n [3] Difícil  \n");
    printf("\n [4] SAIR\n\n -> ");
    scanf("%d",&nivel);
}
void opera() {
    srand(time(NULL));
    op = rand()%3;
    switch (op) {
    case 0:
        operacao = '+';
        result = (n1+n2);
        break;
    case 1:
        operacao = '-';
        result = (n1-n2);
        break;
    case 2:
        operacao = '*';
        result = (n1*n2);
        break;
    }
}

void nivel1() {
    srand(time(NULL));
    n1 = rand()%10;
    n2 = rand()%10;
}

void nivel2() {
    n1 = rand()%20;
    n2 = rand()%20;
}

void nivel3() {
    n1 = rand()%10;
    n2 = rand()%100;
}

void jogo() {
    printf("\n\t************************");
	printf("\n\t*** JOGO DE CÁLCULOS ***");
    printf("\n\t************************");
    printf("\n\n (PONTOS) %d \n\n",pontos);
    printf("\n\n Qual o resultado?");
    printf("  %d %c %d \n\n -> ",n1,operacao,n2);
    scanf("%d",&resp);
    system  ("cls");
    if (resp == result) {
        printf("\n\t************************");
		printf("\n\t*** JOGO DE CÁLCULOS ***");
    	printf("\n\t************************");
        printf("\n\n (PONTOS) %d \n\n",pontos);
        printf("\n\n CORRETO..\n");
        printf("\n +1 ponto\n\n");
        pontos++;
        Sleep(2000);
        system("cls");
    }
    else {
        printf("\n\t************************");
		printf("\n\t*** JOGO DE CÁLCULOS ***");
 	    printf("\n\t************************");
        printf("\n\n (PONTOS) %d \n\n",pontos);
        printf("\n ERRADO..\n");
        Sleep(2000);
        system("cls");
    }
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	system ("MODE con cols=40 lines=15");
    while(nivel != 4) {
        menu();
        pontos =0;
        system("cls");
        do {

            if (nivel == 1) {
                nivel1();
                opera();
                jogo();
            }
            else if (nivel == 2) {
                nivel2();
                opera();
                jogo();
            }
            else if (nivel == 3) {
                nivel3();
                opera();
                jogo();
            }
        } while(resp==result);


    }
    return 0;
}
