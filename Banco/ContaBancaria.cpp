// Arquivo: ContaBancaria.cpp

#include <stdio.h>

#include "ContaBancaria.h"

//***********************************
// ao implementar cada metodo, 
// SUBSTITUIR o codigo DISPONIBILIZADO
// pelo codigo ADEQUADO 
//***********************************


//***********************************
// ContaBancaria
//***********************************


//***********************************
// Metodos primitivos 
//***********************************

ContaBancaria::ContaBancaria (Cliente* cliPonteiro)  {
	  	titular    = cliPonteiro;
  		numAgencia = 1;	  		
	  	numConta   = 10;	
 		saldo      = 1000;		  		
		dtAbDia    = 10;				    		
  		dtAbMes    = 10;				    		
	  	dtAbAno    = 2010;		
		  
  		printf("\n Passou por: ContaBancaria::ContaBancaria (Cliente* cliPonteiro) \n") ;	
		    		
}


//***********************************
// Metodos derivados 
//***********************************

void ContaBancaria::RecuperarConta (int* ag, int* ct, 
		                            int* dAbDia, int* dAbMes, int* dAbAno, 
								    float* sdo, char titCpf[12], char titNome[60],  
								    int* titNascDia, int* titNascMes, int* titNascAno, 
								    char titEndereco[60])   {
								    	
  		printf("\n Passou por: void ContaBancaria::RecuperarConta (...) \n") ;	

 }