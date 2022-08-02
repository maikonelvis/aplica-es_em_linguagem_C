#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int n1,n2,resultado;
float fn1,fn2,fresultado;
char op;

int main(){
	system ("MODE con cols=68 lines=12");
	setlocale (LC_ALL,"portuguese");

  do{
  printf("\n\t\t ___________CALCULADORA___________");
  printf("\n\n Escolha a Operação: Ou Digite [s] Para 'SAIR'\n [+]\n [-]\n [*] \n [/] \n \n -> ");
  scanf("%c",&op);
  system("cls");
	
	switch (op){
		case '+':
			printf("\n\t\t ___________CALCULADORA___________");
			printf("\n\n Digite o primeiro numero: -> ");
			scanf("%d",&n1);
			printf("\n Digite o segundo numero: -> ");
			scanf("%d",&n2);
			resultado = n1+n2;
			printf("\n\n Resultado: %d + %d = %d\n\n",n1,n2,resultado);
			system("pause");
			system("cls");
		break;
		
		case '-':
			printf("\n\t\t ___________CALCULADORA___________");
			printf("\n\n Digite o primeiro numero: -> ");
			scanf("%d",&n1);
			printf("\n Digite o segundo numero: -> ");
			scanf("%d",&n2);
			resultado = n1-n2;
			printf("\n\n Resultado: %d - %d = %d\n\n",n1,n2,resultado);
			system("pause");
			system("cls");
		break;
		
		case '*':
			printf("\n\t\t ___________CALCULADORA___________");
			printf("\n\n Digite o primeiro numero: -> ");
			scanf("%f",&fn1);
			printf("\n Digite o segundo numero: -> ");
			scanf("%f",&fn2);
			fresultado = fn1*fn2;
			printf("\n\n Resultado: %.2f * %.2f = %.2f\n\n",fn1,fn2,fresultado);
			system("pause");
			system("cls");
		break;
		
		case '/':
			printf("\n\t\t ___________CALCULADORA___________");
			printf("\n\n Digite o primeiro numero: -> ");
			scanf("%f",&fn1);
			printf("\n Digite o segundo numero: -> ");
			scanf("%f",&fn2);
			fresultado = fn1/fn2;
			printf("\n\n Resultado: %.2f / %.2f = %.2f\n\n",fn1,fn2,fresultado);
			system("pause");
			system("cls");
		break;
		
		case 's':
			printf("\n\t\t ___________CALCULADORA___________");
			printf("\n\n\n\n\n\n\n   SAINDO....\n\n\n");
	    	Sleep(1500);
			
		break;
		
	}
	
  }while(op!='s');

return 0;	
}
