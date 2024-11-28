//Arquivo: Aplicacao.cpp


#include <stdio.h>
#include <stdlib.h>
#include "Banco.h"

void menuCC();
void menuPoup();
int main(void) {
  int op;
  do {
    printf("Menu Principal \n \n Digite:\n 1 para contacorrente \n 2 para conta poupanca \n 3 para conta espeecial \n 4 para sair");
    
    scanf("%d", &op);

    switch (op) {
	    case 1:
	      void menuCC();
	      break;
	    case 2:
	      void menuPoup()
	      break;
	    case 3:
	      printf("\n Em desdenvolvimento \n");
	      system("PAUSE");
	      break;
	    case 4:
	      printf("\n * Fim *\n\n");
	      break;
	    default:
	      printf("\n-> Opcao invalida\n\n");
	      system("PAUSE");
  }
    }while (op != 4);
    system("PAUSE");
		return EXIT_SUCCESS;
	}
	
//menu conta
void menuCC(){
 	int op;
 	do{
 		printf("digite\n 1 para abrir uma nova conta\n 2 para listar as contas\n 3 para retornar ao menu principal ");
 		scanf("%d",op);
 	
 	switch (op) {
	    case 1:
	     public void Banco::AberturaContaCorrente(void);
	      break;
	    case 2:
	      public void Banco::ListagemContaCorrente(void);
	      break;
	    case 3:
	      printf("\n Em desdenvolvimento \n");
	      system("PAUSE");
	      break;
	    default:
	      printf("\n-> Opcao invalida\n\n");
	      system("PAUSE");
 		
	 }
   }while(op !=3);
 }
 
 void menuPoup(){
 	int op;
 	do{
 		printf("digite\n 1 para abrir uma nova conta\n 2 para listar as contas\n 3 para retornar ao menu principal ");
 		scanf("%d",op);
 	
 	switch (op) {
	    case 1:
	     public void Banco::AberturaContaPoupanca(void);
	      break;
	    case 2:
	      public void Banco::ListagemContaPoupanca(void);
	      break;
	    case 3:
	      printf("\n Em desdenvolvimento \n");
	      system("PAUSE");
	      break;
	    default:
	      printf("\n-> Opcao invalida\n\n");
	      system("PAUSE");
 		
	 }
   }while(op !=3);
 }