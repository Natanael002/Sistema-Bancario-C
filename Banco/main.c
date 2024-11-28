//Arquivo: Aplicacao.cpp
#include <stdio.h>
#include <stdlib.h>

#include "Banco.h"

 
int main(void) {
  int op;
  
  do {
    printf("Menu Principal \n \n Digite:\n 1 - Para conta corrente \n 2 - Para conta poupanca \n 3 - Para conta espeecial \n 4 - Para sair ");
    scanf("%d", &op);

    switch (op) {
	    case 1:
		  void menuCC();
	      break;
	    case 2:
	      void menuPoup();
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
 		printf("digite\n 1 - Para abrir uma nova conta\n 2 - Para listar as contas\n 3 - Para retornar ao menu principal ");
 		scanf("%d",op);
 	
 	switch (op) {
	    case 1:
	    	void AberturaContaCorrente();
	    	break;
	    case 2:
	    	void ListagemContaCorrente();
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
  
// menu poupança
 void menuPoup(){
 	int op;
 	do{
 		printf("digite\n 1 para abrir uma nova conta\n 2 para listar as contas\n 3 para retornar ao menu principal ");
 		scanf("%d",op);
 	
 	switch (op) {
	    case 1:
	    	void AberturaContaPoupanca();
	      break;
	    case 2:
	    	void ListagemContaPoupanca();
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
