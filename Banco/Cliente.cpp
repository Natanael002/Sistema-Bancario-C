// Arquivo: Cliente.cpp

#include <stdio.h>
#include <string.h>

#include "ContaBancaria.h"


//***********************************
// Cliente
//***********************************

Cliente* vetorCli[10];
 
int Cliente::qtdClientes = 0;


//***********************************
// Metodos primitivos 
//***********************************

Cliente::Cliente (char cpfTitular  [12]) {
		
	  	strcpy(cpf, cpfTitular );
	  	strcpy(nome, "Ana" );
	  	strcpy(endereco, "SQS" );
	  	dtNascDia = 1;
	  	dtNascMes = 1;
	  	dtNascAno = 2000;    	
		  
		printf("\n Passou por: Cliente::Cliente (char cpfTitular  [12]) \n") ;	
}

int Cliente::VerificarCliente (char cpfTitular [12]) {
	
	printf("\n Passou por: int Cliente::VerificarCliente (char cpfTitular [12]) \n") ;	
	
	return 0;

}

int Cliente::RecuperarQtdClientes (void) {
	
	printf("\n Passou por: int Cliente::RecuperarQtdClientes (void) \n") ;	

	return 0;

}	  

void Cliente::IncrementarQtdClientes (void) {
	
	printf("\n Passou por: void Cliente::IncrementarQtdClientes (void) \n") ;	

	
}

void Cliente::RecuperarCliente (char cliCpf[12], char cliNome[60], 
			                    int* cliNascDia, int* cliNascMes, int* cliNascAno, 
								char cliEnder[60])  {
									
	printf("\n Passou por: void Cliente::RecuperarCliente (...) \n") ;	
									
	
}

//***********************************
// Metodos derivados 
//***********************************

Cliente* Cliente::VerificarExistenciaCliente (char cpfTitular [12]) {
	
		printf("\n Passou por: Cliente* Cliente::VerificarExistenciaCliente (char cpfTitular [12]) \n") ;	

	
      	return NULL;
}
     
Cliente* Cliente::ObterCliente (void) {
	
	// este mÃ©todo cria objeto do tipo cliente
	// e insere cliente no respectivo vetor
	
		printf("\n Passou por: Cliente* Cliente::ObterCliente (void) \n") ;	

	
	    return NULL;

}