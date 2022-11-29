#include <stdio.h>
#include <stdlib.h>

/* Pares  = = multiplos de 2
   numero dividido por 2 dá resto zero = par
   numero dividido por 3 da resto zero = múltiplo de 3
   
   a % b: resto da divisao de a por b (a e b sao int)
   a / b: quociente da divisao inteira 
   7 / 2 = 3 se os dois lados forem inteiros ou variaveis inteiras
   7.0/2 = 3.5 
   7 / 2.0 = 3.5*/

int main(int argc, char *argv[]) {
	int numero;
	
	printf("\n Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0)//se o resto da divisao de numero por 2 for igual a zero
	{
		printf("\n PAR");
	}else
	{
		printf("\n IMPAR");	
	}
	return 0;
}
