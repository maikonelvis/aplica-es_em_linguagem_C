#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<locale.h>

int a,p,i,j,resp,nivel,pontos=0;

void menu() {
    printf("\n\t*************************");
	printf("\n\t***Jogo da Adivinhação***");
	printf("\n\t************************* \n\n");
    printf("\n\n pontuação: %d ",pontos);
    printf("\n\n Escolha o nível: \n [1]\n [2]\n [3]\n [4] Sair\n\n -> ");
    scanf("%d",&nivel);
    system("cls");
}

void jogar() {

    for(i=j;i>0;i--) {
        printf("\n\t*************************");
		printf("\n\t***Jogo da Adivinhação***");
		printf("\n\t************************* \n\n");
        printf("\n\n Tentativas Restantes: %d",i);
        printf("\n\n Digite um número entre 0 e 100:\n\n --> ");
        scanf("%d",&resp);
        system("cls");

        if(resp == a) {
            p = (nivel*5);
            printf("\n\t  #################");
            printf("\n\t  ###  ACERTOU  ###");
            printf("\n\t  #################");
            
            pontos = pontos + p;
            Sleep(1500);
            system("cls");
            i=0;
        }

        if(resp < a ) {
            printf("\n\n O número é maior que %d \n\n\n",resp);
            Sleep(1500);
            system("cls");
        }

        if(resp > a ) {
            printf("\n\n O número é menor que %d \n\n\n",resp);
            Sleep(1500);
            system("cls");
        }
    }
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	system ("MODE con cols=40 lines=18");
	
    do {
        srand(time(NULL));
        a = rand()%100;
        menu();

        if(nivel == 1) {
            j = 15;
            jogar();
        }

        if(nivel == 2) {
            j = 10;
            jogar();
        }

        if(nivel == 3) {
            j = 5;
            jogar();
        }

    } while(nivel!=4);



return 0;
}
