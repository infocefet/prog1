#include <stdio.h>
#include <stdlib.h>

/*
Comandos de repeticao

Comando for tem 3 secoes

int i; //contador : conta o numero de iteracoes do loop
Calcular:
a) o somatorio de todos os numeros de 1 a 9
b) numeros primos sao divisiveis sao por 1 e por ele mesmo
*/

int main(int argc, char *argv[]) {
	int i = 0,j, soma = 0, ehPrimo = 1;	
	for(i = 1; i < 50; i+=2)
	{
		//pra saber se i eh primo vou procurar
		//um divisor entre 2 e i-1
		ehPrimo = 1;
		for(j = 2; j <= i-1; j++)
		{
			if(i%j == 0)
			{
				ehPrimo = 0; // nao eh primo
				break;
			}
		}
		if(ehPrimo == 1)
		{
			printf("\n %d => primo", i);
			soma = soma + i;
		}else
		{
			printf("\n %d => NAO primo", i);
		}
	}
	printf("\n Soma dos primos = %d", soma);
	return 0;
}
